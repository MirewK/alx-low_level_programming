#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index to be set
 *
 * Return: 1 on success, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= (~(1 << index));

	return (1);
}
