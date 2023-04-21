#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
/**
 *print_all - prints any type of data
 *@format: is the formatting options
 *Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char ch;
	int n;
	double f;
	va_list fmt_str;

	va_start(fmt_str, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			ch = va_arg(fmt_str, int);
			printf("%c, ", ch);
		} else if (format[i] == 'i')
		{
			n = va_arg(fmt_str, int);
			printf("%d, ", n);
		} else if (format[i] == 'f')
		{
			f = va_arg(fmt_str, double);
			printf("%f", f);
		} else if (format[i] == 's')
		{
			str = va_arg(fmt_str, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", str);
		}
		i++;
	}
	printf("\n");
	va_end(fmt_str);
}
