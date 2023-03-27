#include "main.h"

/**
 *_puts - prints string, followed by a new line to stdout
 *@:
 *@s: array pointer.
 *Return: nothing.
 */

void _puts(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	_putchar(*s);
	}
	_putchar('\n');
}
