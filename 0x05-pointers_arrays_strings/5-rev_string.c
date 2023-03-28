#include<stdio.h>

/**
 *rev_string - prints string in reverse
 *@s: character pointer.
 *Return: nothing.
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		;
	}
	for (--i; i >= 0; --i)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
