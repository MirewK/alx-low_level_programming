#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: pointer to binary num location
 *
 * Return: 0 if it is NULL or the converted num on success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len;

	if (b == NULL)
		return (0);

	while (b[len] == '0' || b[len] == '1')
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
