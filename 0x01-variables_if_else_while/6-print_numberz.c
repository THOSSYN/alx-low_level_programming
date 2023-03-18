#include <stdio.h>

/**
 *main - "prints all single digit base 10 numbers and newline."
 *
 *Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
