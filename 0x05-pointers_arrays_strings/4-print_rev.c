#include<string.h>
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
	char i, j, temp;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}
