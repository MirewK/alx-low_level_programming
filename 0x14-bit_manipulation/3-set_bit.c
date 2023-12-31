#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: the number which its bit will be changed to 1
 * @index: the bit index to be changed to 1
 *
 * Return: 1 always on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
