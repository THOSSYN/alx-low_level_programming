#include<stdio.h>

/**
 *print_diagsums - prints the sum of two diagonal.
 *@a: pointer to array
 *@size: is the size of array.
 *Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
			sum = sum + *(a + (i * size + j));
			}
			if (i + j == size - 1)
			{
			sum1 = sum1 + *(a + (i * size + j));
			}
		}
	}
	printf("%d, %d\n", sum, sum1);
}
