#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 *main - "assigns a random number but print the last digit."
 *
 *Return: Always 0
 */


int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	
	if (last_dig == 0)
	{
		printf("Last digit of %d =  %d and is equal to 0\n", n, last_dig);
	}
	else if (last_dig > 0)
	{
		printf("Last digit of= %d = %d and is greater than 5\n", n, last_dig);
	}
	else
	{
		printf("Last digit of %d = %d and is less than 6 and not 0\n", n, last_dig);
	}
	return (0);
}

