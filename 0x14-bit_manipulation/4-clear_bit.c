#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at given idx
 *@n: is the pointer to the number being changed
 *@index: is the position of changed bit
 *Return: 1 on success or -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_aft;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num_aft = *n & (~(1 << index));
	*n = num_aft;
	return (1);
}
