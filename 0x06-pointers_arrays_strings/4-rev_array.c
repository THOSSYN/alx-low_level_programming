#include "main.h"

/**
 *reverse_array - reverses the content of an array integers.
 *@a: pointer to integer
 *@n: expected argument.
 *Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	while (*(a + i) != '\0')
	{
		i++;
	}
	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = temp;
	}
}
