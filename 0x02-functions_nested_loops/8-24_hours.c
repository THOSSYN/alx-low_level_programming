#include "main.h"

/**
 *jack_bauer - print every minutes of the day.
 *@i: loop through all minutes.
 *@j: loop through all seconds.
 *Return: void.
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
		}
	}	
}
