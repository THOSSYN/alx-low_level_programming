#include<stdio.h>
#include<unistd.h>

int _putchar(char str[])
{
	write(1, str, 8);
	putchar('\n');
	return (0);
}
