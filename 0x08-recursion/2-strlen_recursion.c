#include<stdio.h>

/**
 *_strlen_recursion - prints the length of a string.
 *@s: character pointer passed to the function.
 *Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
