#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 *print_numbers -> prints number
 *@separator: is the seperator string
 *@n: is the number of parameters passed
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(nums, unsigned int);
		if (i == n - 1)
		{
			printf("%d", value);
		}
		else
			printf("%d%s", value, separator);
	}
	va_end(nums);
	printf("\n");
}
