#include "main.h"

/**
 *print_sign - print 1 when sign is +, 0 when 0, / when -1
 *
 *@n: checks the numbers
 *Return: 0 or 1
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
	test = 1;
	_putchar('+');
	}
	else if (n == 0)
	{
	test = 0;
	_putchar('0');
	}
	else
	{
	test = -1;
	_putchar('-');
	}
	return (test);
}
