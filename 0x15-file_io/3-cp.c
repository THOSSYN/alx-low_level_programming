#include<stdio.h>
#include "main.h"

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int desc1, desc2;
	ssize_t justrite, read_byt;
	char count[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	desc1 = open(argv[1], O_RDONLY);
	desc2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (desc1 == -1)
	{
		if (access(argv[1],F_OK) == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n",argv[1]);
			exit(98);
		}
	}
	if (desc2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(desc2);
		exit(99);
	}
	while ((read_byt = read(desc1, count, sizeof(count))) > 0)
	{
		justrite = write(desc2, count, read_byt);
		if (justrite == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(desc1);
			close(desc2);
			exit(99);
		}
	}
	if (read_byt == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(desc1);
		close(desc2);
		exit(98);
	}
	close(desc1);
	close(desc2);
	return (0);
}
