#include<stdio.h>

/**
 *cap_string - capitalizes all words of a string.
 *@s: expected argument.
 *
 *Return: character pointer.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			continue;
		}
		if (s[i] == ' ' && (s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
		{
			continue;
		}
		if ((s[i] == ' ' && s[i + 1] != ' ')
		|| (s[i] == '\t' && s[i + 1] != ' '))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == '.' && s[i + 1] != ' ')
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
