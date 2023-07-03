#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer that locates the memory space to be filled
 * @b: character to be filled
 * @n: numbers of characters
 *
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while(n--)
	{
		*p++ = (unsigned char) b;
	}

	return s;
}
