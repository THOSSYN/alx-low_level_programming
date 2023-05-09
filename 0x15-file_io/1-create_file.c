#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 *create_file - creates a file
 *@filename: is the pointer to the file name
 *@text_content: is the string to be written to file
 *Return: 1 on success and -1 if any failure
 */

int create_file(const char *filename, char *text_content)
{
	int des;
	ssize_t right_byte;
	size_t size;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	size = strlen(text_content);
	des = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (des == -1)
		return (-1);
	right_byte = write(des, text_content, size);
	close(des);
	if (right_byte == -1)
		return (-1);
	return (1);
}
