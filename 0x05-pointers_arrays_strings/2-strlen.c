#include<stdio.h>

/**
 *_strlen - returns the length of a string.
 *@s: array pointer
 *@i:
 *Return: i the string lenght.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
