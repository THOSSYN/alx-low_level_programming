#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiply two positive number.
 *@argc: is the argument count
 *@argv: is the argument vector
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int num1, num2, mul;
	char *av1 = argv[1];
	char *av2 = argv[2];
	char err[] = "Error";

	if (argc != 3)
	{
		return (0);
	}
	for (i = 0; av1[i]; i++)
	{
		if (!isdigit(av1[i]))
		{
			for (i = 0; err[i] != '\0'; i++)
			{
			_putchar(err[i]);
			}
			_putchar('\n');
			return (98);
		}
	}
	for (i = 0; av2[i]; i++)
	{
		if (!isdigit(av2[i]))
		{
			for(i = 0; err[i] != '\0'; i++)
			{
				_putchar(err[i]);
			}
			_putchar('\n');
			return (98);
		}
	}
	num1 = atoi(av1);
	num2 = atoi(av2);
	mul = num1 * num2;
	_putchar(mul + '0');
	_putchar('\n');
	return (0);
}
