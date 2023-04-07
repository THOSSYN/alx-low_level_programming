#include<stdio.h>

/**
 *_strstr - locate a substring.
 *@haystack: contains a substr.
 *@needle: substring.
 *Return: pointer to character.
 */

char *_strstr(char *haystack, char *needle)
{
	char *Isfound;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	while (*haystack != '\0')
	{
		Isfound = needle;
		while (*Isfound != '\0')
		{
			if (*haystack == *Isfound)
			{
				return (haystack);
			}
			Isfound++;
		}
		haystack++;
	}
	return (0);
}
