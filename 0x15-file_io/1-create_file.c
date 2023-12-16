#include "main.h"
/**
  * create_file - a function that creates a file.
  * @filename: file to be created
  * @text_content:  is a NULL terminated string to write to the file
  * Return: 1 if successful, or -1 if not
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len_write;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len_write = write(fd, text_content, strlen(text_content));
	if (len_write == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);

}
