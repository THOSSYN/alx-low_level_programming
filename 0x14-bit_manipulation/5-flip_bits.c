#include "main.h"

/**
 *flip_bits - returns the number of bit that differs
 *@n: is the first number
 *@m: is the second number
 *Return: the number of bit that defers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, RSB;
	unsigned int XOR = n ^ m;

	while (XOR)
	{
		RSB = XOR & -XOR;
		XOR -= RSB;
		count++;
	}
	return (count);
}
