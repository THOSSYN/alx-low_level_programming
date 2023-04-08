#include<stdio.h>

/**
 *main - print the name of the program and a new line.
 *@argc: counts the number of argument
 *@argv: returns the actual argument given.
 *Return: nothing.
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
