#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all -> returns the sum of all its param
 *@n: is the size of the argument
 *Return: the result to main function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list some_args;

	va_start(some_args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(some_args, unsigned int);
	}
	va_end(some_args);
	return (sum);
}
