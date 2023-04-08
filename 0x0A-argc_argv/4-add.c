#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: string count
 *Return: 0, 1 or sum.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
