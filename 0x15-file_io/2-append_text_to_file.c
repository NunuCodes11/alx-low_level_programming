/**
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
Return: 1 on success and -1 on failure
Do not create the file if it does not exist
If filename is NULL return -1
If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file
*/
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t checkApp;
	if (!filename)
		return (-1);
	if (text_content != NULL)
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
