/**
  * main - entry point
  * @argc: number of arguments
  * @argv: pointer to strings of command line arguments
  * Return: 0 if succesfull
  */
#include "main.h"
int main(int argc, char *argv[]);

int main(int argc, char **argv)
{
	int file, file2, buff_int;
	ssize_t from_read, to_read;
	char *filefrom, *fileto, *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filefrom = argv[1];
	fileto = argv[2];
	file = open(filefrom, O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	file2 = open(fileto, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file2 == -1)
	{
		close(file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}
	buff_int = 4096;
	buff = malloc(sizeof(char) * buff_int);
	from_read = read(file, buff, buff_int);
	if (from_read == -1)
	{
		free(buff);
		close(file);
		close(file2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}

	to_read = write(file2, buff, from_read);
	if (to_read == -1)
	{
		free(buff);
		close(file);
		close(file2);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file2);
		exit(100);
	}
	free(buff);
	return (0);
}
