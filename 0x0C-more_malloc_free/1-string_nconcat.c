#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat -> concatenates two strings.
 *@s1: is the receiving string
 *@s2: is the string donor
 *@n: is the number of byte taken from s2
 *Return: pointer to new allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nu_str;
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);
	unsigned int len = l1 + l2;
	unsigned int i;

	nu_str = malloc(sizeof(char) * len);
	if (nu_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		nu_str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		nu_str[l1 + i] = s2[i];
	}
	nu_str[len - 1] = '\0';
	return (nu_str);
}
