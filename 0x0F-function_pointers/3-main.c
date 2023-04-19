#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	
	if (!(argv[2] == '+' || argv[2] == '-' || argv[2] == '*'))
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[1] / 0 || argv[1] % 0)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
}
