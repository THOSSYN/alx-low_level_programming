#include "main.h"

/**
 *print_last_digit - "prints the last digit of anumber."
 *
 *@r: is the parameter
 *Return: the value of the last digit.
 */

int print_last_digit(int r)
{
	int last_digit;
	if (r < 0)
	{	
	last_digit = (1 * (r % 10));
	_putchar(last_digit + '0');
	return (last_digit);
	}
	else
	{
	last_digit = r % 10;
	_putchar(last_digit + '0');
	return (last_digit);
	}
	return (0);
}
