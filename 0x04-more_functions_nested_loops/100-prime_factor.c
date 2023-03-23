#include<stdio.h>

/**
 *main - prints prime factors of 612852475143
 *@count: lowest prime factor
 *@number: is the test case 
 *Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	int count;

	for (count = 2; number > 1; count++)
	{
		while (number % count == 0)
		{
		printf("%d ", count);
		number = number / count;
		}
	}
	printf("\n");
	return (0);
}
