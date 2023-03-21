#include <stdio.h>

/**
 *print_to_98 - "prints natural number n to 98."
 *
 *n: is the initial value.
 *
 *Return: Always 0
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		if (n == 98)
		break;
	printf(",");
	printf(" ");
	}
	printf("\n");
}
