#include "main.h"

/**
 * flip_bits - function to get the number of bit to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: the num of bits you would need ot flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, git = 0;

	num = n ^ m;

	while (num > 0)
	{
		git += (num & 1);
		num >>= 1;
	}

	return (git);
}
