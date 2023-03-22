#include<stdio.h>

/**
 *main - "prints first fibonacci numbers starting with 1 and 2."
 *
 *
 *
 *Return: Always 0
 */

int main(void)
{
	int a, b, i, result;

	a = 1;
	b = 1;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}
