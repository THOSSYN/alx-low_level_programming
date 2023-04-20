#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 *print_strings -  prints strings
 *@separator: is the delimeter used
 *@n: is the number of parameters in the func
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *out_str;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		out_str = va_arg(str, char*);
		if (i == n - 1)
		{
			printf("%s", out_str);
		}
		else
			printf("%s%s", out_str, separator);
	}
	va_end(str);
	printf("\n");
}
