#include "main.h"

/**
 *get_endianness - checks the endianness of a machine
 *
 *Return: 0 if little endian and 1 if big endian
 */

int get_endianness(void)
{
	unsigned int endy;
	char *endptr = (char *)&endy;

	if (*endptr)
	{
		return (1);
	}
	else
		return (0);
}
