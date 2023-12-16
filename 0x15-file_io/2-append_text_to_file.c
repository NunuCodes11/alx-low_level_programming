#include "main.h"
/**
  * append_text_to_file - a function that creates a file.
  * @filename: file to be appended
  * @text_content:  is a NULL terminated string to write to the file
  * Return: 1 if successful, or -1 if not
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len_write;

	if (!filename)
		return (-1);
	if (!text_content)
		;
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		len_write = write(fd, text_content, strlen(text_content));
		if (len_write == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
	}
	return (1);
}
