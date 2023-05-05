#include "main.h"

/**
 *print_binary - prints the binary representation of a num
 *
 *@n: is the integer value being converted
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int rem = 0, i = 0, j;
	char buf[33];

	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		rem = n & 1;
		buf[i++] = rem;
		n = n >> 1;
	}
	for (j = i; j-- > 0;)
		_putchar(buf[j] + '0');
}
