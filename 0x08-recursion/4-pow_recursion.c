#include<stdio.h>

/**
 *_pow_recursion - return the value of x raised to y.
 *@x: expected arg1
 *@y: expected arg2
 *Return: the result of power of x to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
