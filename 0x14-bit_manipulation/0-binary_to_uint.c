#include "main.h"
#include <string.h>
/**
 *binary_to_uint - converts a binary number to an uint.
 *
 *@b: pointer the string of the binary number
 *Return: the result of the converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
		{
			sum = sum << 1 | 1;
		}
		else if (*b == '0')
		{
			sum = sum << 1;
		}
		else
			return (0);
		b++;
	}
	return (sum);
}
