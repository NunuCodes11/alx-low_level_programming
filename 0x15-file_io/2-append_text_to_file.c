/**
  * append_text_to_file - a function that appends tet at the end of a file
  * @filename: the name of the file
  * @text_content: string t be added at the end of the file
  * Return: 1 on success and -1 on failure
  */
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t checkApp;

	if (!filename)
		return (-1);
	if (!text_content)
		;
	else
	{
		fd = open(filename, O_APPEND | O_WRONLY);
		if (fd == -1)
			return (-1);
		for (i = 0; text_content[i]; i++)
			;
		checkApp = write(fd, text_content, i);
		if (checkApp == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
	}
	return (1);
}
