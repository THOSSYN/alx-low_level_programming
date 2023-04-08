#include "main.h"
#include <string.h>

int palin_deter(char *s, int starter, int length);
/**
 *is_palindrome - checks for palindrome
 *@s: is the address passed to the function.
 *
 *Return: returns 0 or 1.
 */

int is_palindrome(char *s)
{
	int length = strlen(s) - 1;

	return (palin_deter(s, 0, length));
}

/**
 *palin_deter - checks if a string is palindrome
 *@s: is the string we are examining
 *@starter: the left index pointer
 *@length: the right index pointer.
 *Return: 0 or 1.
 */

int palin_deter(char *s, int starter, int length)
{
	if (starter >= length)
		return (1);
	if (s[starter] != s[length])
	{
		return (0);
	}
	return (palin_deter(s, starter + 1, length - 1));
}
