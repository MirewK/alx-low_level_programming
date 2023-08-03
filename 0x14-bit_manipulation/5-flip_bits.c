#include "main.h"

/**
 * flip_bits - function to get the number of bit to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: the num of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int c;

	for (c = a ^ b; c != 0; c = c & (c - 1))
		count ++;

	return (count);
}
