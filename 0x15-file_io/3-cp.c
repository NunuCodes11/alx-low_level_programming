/**
  * main - entry point
  * @argc: number of arguments
  * @argv: pointer to strings of command line arguments
  * Return: 0 if succesfull
  */
#include "main.h"
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int fd, fd2, buffer_int;
	ssize_t fromread, toread;
	char *file_from, *file_to, *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buffer_int = 4096;
	buffer = malloc(sizeof(char) * buffer_int);
	fromread = read(fd, buffer, buffer_int);
	if (fromread == -1)
	{
		free(buffer);
		close(fd);
		close(fd2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	toread = write(fd2, buffer, fromread);
	if (toread == -1)
	{
		free(buffer);
		close(fd);
		close(fd2);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	free(buffer);
	return (0);
}
