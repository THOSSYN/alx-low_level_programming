#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings.
 *@s1: the destination string
 *@s2: the source string.
 *Return: pointer to the new allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int new_len = l1 + l2 + 1;
	char *new_str = malloc(sizeof(char) * new_len);

	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, s1, l1);
	memcpy(new_str + l1, s2, l2);
	new_str[l1 + l2] = '\0';
	return (new_str);
}
