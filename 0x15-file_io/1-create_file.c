
/**
  * create_file - a function that creates a file
  * @filename: name of he file to be create
  * @text_content: a NULL terminated string to write to file
  * Return: 1 on success, -1 on failure
  */
#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t checkW;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	checkW = write(fd, text_content, i);
	if (checkW == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);

}
