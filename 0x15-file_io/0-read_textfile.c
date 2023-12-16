#include "main.h"
/**
  * read_textfile - reads text file and prints it to the POSIX standard output
  * @filename: file to be opened
  * @letters: number of letters it should read and print
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_read, len_write;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	len_read = read(fd, buffer, letters);
	if (len_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	len_write = write(STDOUT_FILENO, buffer, len_read);
	if (len_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (len_read != len_write)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (len_read);
}
