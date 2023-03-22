#include<stdio.h>

/**
 *print_last_digit - "prints the last digit of anumber."
 *
 *@r: is the parameter
 *Return: the value of the last digit.
 */

int print_last_digit(int r)
{
	int last_digit;
	
	last_digit = r % 10;
	return (last_digit);
}
