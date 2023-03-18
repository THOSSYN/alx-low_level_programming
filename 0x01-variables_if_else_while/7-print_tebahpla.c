#include <stdio.h>

/**
 *main - "print reverse of lowercase alphabets followed by newline"
 *
 *Return: Always 0
 */

int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
	putchar(i);
	i--;
	}
	putchar('\n');
	return (0);
}
