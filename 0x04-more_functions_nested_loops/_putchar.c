#include<unistd.h>

/**
 *_putchar - writes the character c to the screen.
 *@c: Character to print
 *Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
