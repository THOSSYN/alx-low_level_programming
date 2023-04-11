#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - duplicate a string and returns a pointer
 *@str: is the pointer to string being duplicated
 *
 *Return: pointer to the duplicate string.
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = strlen(str);
	char *str2 = malloc(sizeof(*str) * len);
	if (!str2)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		str2[i++] = *str++;
	}
	str2[i] = '\0';
	return (str2);
}
