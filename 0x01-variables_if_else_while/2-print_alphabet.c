#include <stdio.h>

/**
 *main - "prints alphabet in lowercase followed by newline."
 *
 *Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
