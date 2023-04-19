#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 *main - is intended to print its opcode
 *@argc: argument count
 *@argv: is the argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int input;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	input = atoi(argv[1]);
	system("objdump -d -M intel -S ./main | grep -A20 'main:'");
	return (0);
}
