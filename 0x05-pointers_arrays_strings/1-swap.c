#include<stdio.h>

/**
 *swap_int - exchange values between two numbers.
 *@a: pointer two
 *@b: pointer one
 *@temp:
 *return: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
