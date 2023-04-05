#include<stdio.h>

/**
 *_sqrt_recursion - prints natural square root of nums.
 *@n: is the number which square root is determined.
 *
 *Return: square root of that number.
 */

int _sqrt_recursion(int n)
{
	int old_guess = n;
	int new_guess = (old_guess + (n / old_guess)) / 2;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	while (old_guess - new_guess)
	{
		old_guess = new_guess;
		new_guess = (old_guess + (n / old_guess)) / 2;
	}
	return (new_guess);
}
