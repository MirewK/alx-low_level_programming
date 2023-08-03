#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: the number which its bit will be changed to 1
 * @index: the bit index to be changed ot 1
 *
 * Return: always on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *num;

	*num = &n;
	for (index = 0; index < 32; index++)
	{
		*num = 1;
	}
}
