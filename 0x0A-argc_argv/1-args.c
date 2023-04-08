#include<stdio.h>

/**
 *main - prints the number of arguments passed to it.
 *@argc: counts the number of argument passed.
 *@argv: the string that are passed.
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
