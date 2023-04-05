#include<stdio.h>

/**
 *factorial - prints the factorial of a number.
 *@n: is the number which factorial is calculated.
 *Return: the result of function "factorial".
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
