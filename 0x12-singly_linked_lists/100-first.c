#include<stdio.h>

/**
 *lets_print_before_main - prints something before main
 *Return: nothing
 */
void lets_print_before_main(void) __attribute__ ((constructor));
void lets_print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
