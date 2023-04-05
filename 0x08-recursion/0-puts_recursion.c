#include "main.h"

/**
 *_puts_recursion - prints a string followed by new line.
 *@s: takes a pointer to char array passed.
 *
 *Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
