#include<stdio.h>

/**
 *print_alphabet_x10 - "print alphabet a to z ten times."
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for(j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
