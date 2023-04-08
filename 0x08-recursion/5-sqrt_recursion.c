#include "main.h"

int sqrt1(int n, int iter);
/**
 *_sqrt_recursion - prints natural square root of nums.
 *@n: is the number which square root is determined.
 *
 *Return: square root of that number.
 */

int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}

/**
 *sqrt1 - calculate the square root of a number.
 *@n: the number which square root is calculated
 *@iter: this is the recursive parameter
 *Return: result of square root to the calling function.
 */

int sqrt1(int n, int iter)
{
	int res_of_square = iter * iter;

	if (res_of_square > n)
	{
		return (-1);
	}
	if (res_of_square == n)
	{
		return (iter);
	}
	return (sqrt1(n, iter + 1));
}
