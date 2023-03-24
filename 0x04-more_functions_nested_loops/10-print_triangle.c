#include "main.h"

/**
 *print_triangle - prints a triangle.
 *
 *@size: determines the size of the triangle.
 *Return: void.
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = size; k >= i; k--)
		{
		_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
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
	}
}
