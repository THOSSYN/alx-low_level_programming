#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 *print_all - prints any type of data
 *@format: is the formatting options
 *Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list fmt_str;

	va_start(fmt_str, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			int ch = va_arg(fmt_str, int);

			printf("%c, ", ch);
		}
		else if (format[i] == 'i')
		{
			int n = va_arg(fmt_str, int);

			printf("%d, ", n);
		}
		else if (format[i] == 'f')
		{
			double f = va_arg(fmt_str, double);

			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			str = va_arg(fmt_str, char*);
			printf("%s", str);
		}
		i++;
	}
	printf("\n");
	va_end(fmt_str);
}
