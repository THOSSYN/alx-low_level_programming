#include "main.h"

/**
 *print_rev - prints a string in reverse, followed by new line.
 *@s: array pointer
 *@temp:
 *@i:
 *@j:
 *Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (--i; i >= 0; --i)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
