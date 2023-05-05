#include "main.h"

/**
 *print_binary - prints the binary representation of a num
 *
 *@n: is the integer value being converted
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	int temp;

	if (n == 0 || n == 1)
		_putchar(n + '0');
	else
	{
		temp = n & 1;
		n = n >> 1;
		print_binary(n);
		_putchar(temp + 48);
	}
}
