#include "main.h"

/**
 *print_square - prints a square followed by a new line.
 *
 *@size: 
 *Return: void
 */

void print_square(int size)
{
	int i, j;
	i = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			j++;
			if (size <= 0)
			{
			_putchar('\n');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
		i++;
	}
}
