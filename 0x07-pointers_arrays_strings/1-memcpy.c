#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory address
 * @n: bytes to be copied
 *
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
