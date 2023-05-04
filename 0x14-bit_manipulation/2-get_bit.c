#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: is the number/bit at that index
 *@index: is the bit position
 *Return: the number which bits is set
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get_num;

	get_num = n >> (index);

	return (get_num & 1);
}
