#include<unistd.h>

/**
 *print_number - prints integer
 *
 *@n: 
 *Return: void
 */

void print_number(int n)
{
	write(1, &n, sizeof(n));
}
