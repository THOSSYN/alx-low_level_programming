#include<stdio.h>

/**
 *print_last_digit - "prints the last digit of anumber."
 *
 *
 *Return: the value of the last digit.
 */

int print_last_digit(int r)
{
	int last_digit;
	
	last_digit = r % 10;
	return (last_digit);
}
