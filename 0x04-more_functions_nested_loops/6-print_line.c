#include<stdio.h>
#include "main.h"

/**
 *print_line - prints line on the screen.
 *
 *@i: for loop
 *@n: 
 *Return: void
 */

void print_line(int n)
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
		_putchar('-');
		i++;
		}
	}
	_putchar('\n');
}
