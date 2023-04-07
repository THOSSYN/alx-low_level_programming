#include "main.h"

/**
 *_puts - prints string, followed by a new line to stdout
 *
 *@s: array pointer.
 *Return: nothing.
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s++);
	}
	_putchar('\n');
}
