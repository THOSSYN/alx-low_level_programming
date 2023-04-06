#include <stdio.h>
#include <string.h>

/**
 *is_palindrome - checks for palindrome
 *@s: is the address passed to the function.
 *
 *Return: returns 0 or 1.
 */

int is_palindrome(char *s)
{
	int i;
	int flag = 0;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
