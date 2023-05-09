#include "main.h"

/**
 *read_textfile - reads a text file and prints it stdout
 *
 *@letters: is the number of bytes to be printed
 *Return: the number of character written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024];
	int fd;
	ssize_t num_byte, count;

	if (filename == NULL)
		return (0);

	fd = STDIN_FILENO;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((num_byte = read(fd, buf, letters)))
	{
		count = write(STDOUT_FILENO, buf, num_byte);
	}
	close(fd);
	if (count == -1)
		return (0);
	return (count);
}
