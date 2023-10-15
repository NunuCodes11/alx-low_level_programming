#include "main.h"


/**
 * _check_elf - Checks if a file is an ELF file.
 * @_e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void _check_elf(unsigned char *_e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (_e_ident[index] != 127 &&
			_e_ident[index] != 'E' &&
			_e_ident[index] != 'L' &&
			_e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _print_magic - Prints the magic numbers of an ELF header.
 * @_e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void _print_magic(unsigned char *_e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", _e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _print_class - Prints the class of an ELF header.
 * @_e_ident: A pointer to an array containing the ELF class.
 */
void _print_class(unsigned char *_e_ident)
{
	printf("  Class:                             ");

	switch (_e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", _e_ident[EI_CLASS]);
	}
}

/**
 * _print_data - Prints the data of an ELF header.
 * @_e_ident: A pointer to an array containing the ELF class.
 */
void _print_data(unsigned char *_e_ident)
{
	printf("  Data:                              ");

	switch (_e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", _e_ident[EI_CLASS]);
	}
}

/**
 * _print_version - Prints the version of an ELF header.
 * @_e_ident: A pointer to an array containing the ELF version.
 */
void _print_version(unsigned char *_e_ident)
{
	printf("  Version:                           %d",
		   _e_ident[EI_VERSION]);

	switch (_e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _print_osabi - Prints the OS/ABI of an ELF header.
 * @_e_ident: A pointer to an array containing the ELF version.
 */
void _print_osabi(unsigned char *_e_ident)
{
	printf("  OS/ABI:                            ");

	switch (_e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", _e_ident[EI_OSABI]);
	}
}

/**
 * print_os - Prints the ABI version of an ELF header.
 * @_e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_os(unsigned char *_e_ident)
{
	printf("  ABI Version:                       %d\n",
		   _e_ident[EI_ABIVERSION]);
}

/**
 * _print_type - Prints the type of an ELF header.
 * @_e_type: The ELF type.
 * @_e_ident: A pointer to an array containing the ELF class.
 */
void _print_type(unsigned int _e_type, unsigned char *_e_ident)
{
	if (_e_ident[EI_DATA] == ELFDATA2MSB)
		_e_type >>= 8;

	printf("  Type:                              ");

	switch (_e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", _e_type);
	}
}

/**
 * _print_entry - Prints the entry point of an ELF header.
 * @_e_entry: The address of the ELF entry point.
 * @_e_ident: A pointer to an array containing the ELF class.
 */
void _print_entry(unsigned long int _e_entry, unsigned char *_e_ident)
{
	printf("  Entry point address:               ");

	if (_e_ident[EI_DATA] == ELFDATA2MSB)
	{
		_e_entry = ((_e_entry << 8) & 0xFF00FF00) |
				  ((_e_entry >> 8) & 0xFF00FF);
		_e_entry = (_e_entry << 16) | (_e_entry >> 16);
	}

	if (_e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)_e_entry);

	else
		printf("%#lx\n", _e_entry);
}

/**
 * _close_elf - Closes an ELF file.
 * @_elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void _close_elf(int _elf)
{
	if (close(_elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _elf);

		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int open_elf;
	ssize_t read_elf;

	open_elf = open(argv[1], O_RDONLY);
	if (open_elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		_close_elf(open_elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_elf = read(open_elf, header, sizeof(Elf64_Ehdr));
	if (read_elf == -1)
	{
		free(header);
		_close_elf(open_elf);
		dprintf(STDERR_FILENO, "Error: %s: No such file\n", argv[1]);
		exit(98);
	}

	_check_elf(header->e_ident);
	printf("ELF Header:\n");
	_print_magic(header->e_ident);
	_print_class(header->e_ident);
	_print_data(header->e_ident);
	_print_version(header->e_ident);
	_print_osabi(header->e_ident);
	print_os(header->e_ident);
	_print_type(header->e_type, header->e_ident);
	_print_entry(header->e_entry, header->e_ident);

	free(header);
	_close_elf(open_elf);
	return (0);
}
