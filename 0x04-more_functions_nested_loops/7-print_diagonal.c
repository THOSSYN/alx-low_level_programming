#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal.
 *
 *Return: void
 */

void print_diagonal(int n)
{
	int i;
	i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{
		_putchar('\\');
		_putchar('\n');
		i++;
		}
	}
}
