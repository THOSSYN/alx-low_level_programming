#include "main.h"

/**
 *print_binary - prints the binary representation of a num
 *
 *@n: is the integer value being converted
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x80;
	unsigned long int i;

	for (i = 0; i < (sizeof(unsigned long int)); i++)
	{
		if (n & (mask >> i))
			_putchar('1');
		else
			_putchar('0');
	}
}
