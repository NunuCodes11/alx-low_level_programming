/**
  * read_textfile - reads  file and prints it to POSIX standrd ouput
  * @filename: text file from which to read data
  * @letters: number of bytes to be read
  * Return: acutal number of letters it could read and print
  * or returns 0, if the file can not be open or if filename is NULL
  * or if write fails or does not write the expected amount of bytes
  */
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	ssize_t lenread, lenwrite;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	lenread = read(fd, buffer, letters);
	if (lenread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	for (i = 0; buffer[i]; i++)
		;
	lenwrite = write(STDOUT_FILENO, buffer, i);
	if (lenwrite == -1 && lenwrite != lenread )
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (lenwrite);

}
