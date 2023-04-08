#include <stdio.h>

/**
 *main - prints all arguments received.
 *@argc: counts number of arguments received
 *@argv: counts strings input.
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
