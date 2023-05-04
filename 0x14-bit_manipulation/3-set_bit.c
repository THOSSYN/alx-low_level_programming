#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given idx
 *@n: is the pointer to the address of the number
 *@index: is the position of the bit being set
 *Return: 1 if success or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_aft;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	num_aft = *n | (1 << index);
	*n = num_aft;
	return (1);
}
