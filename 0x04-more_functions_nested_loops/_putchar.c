#include<stdio.h>
#include<unistd.h>

int _putchar(int c)
{
	write(1, &c, 1);
	putchar('\n');
	return (0);
}
