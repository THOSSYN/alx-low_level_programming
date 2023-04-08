#include "main.h"

int pm_deter(int n, int add1);
/**
 *is_prime_number - checks if a number is prime.
 *@n: the numerator.
 *Return: the result.
 */

int is_prime_number(int n)
{
	return (pm_deter(n, 1));
}

/**
 *pm_deter - determines if a number is prime.
 *@n: the number which prime status is determined
 *@add1: the parameter that iterates.
 *Return: 0 or 1
 */

int pm_deter(int n, int add1)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % add1 == 0 && add1 > 1)
	{
		return (0);
	}
	if ((n / add1) < add1)
	{
		return (1);
	}
	return (pm_deter(n, add1 + 1));
}
