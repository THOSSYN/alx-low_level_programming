#include <stdio.h>

/**
 *main - "header file for 1-print_alphabet."
 *
 *Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
