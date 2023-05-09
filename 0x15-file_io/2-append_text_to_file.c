#include "main.h"
#include<string.h>
/**
 *append_text_to_file - appends to the end of a file
 *@filename: is pointer to the filename
 *@text_content: is the string to be appended
 *Return: 1 on success or -1 if any failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t right;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	right = write(fd, text_content, strlen(text_content));
	close(fd);
	if (right == -1)
	{
		return (-1);
	}
	return (1);
}
