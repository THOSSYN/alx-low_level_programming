#include<stdio.h>
#include "main.h"

/**
 *more_numbers - prints 10 times number from 0 to 14
 *@i: outer loop
 *@j: inner loop
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		_putchar(j);
		}
	}
	_putchar('\n');
}
