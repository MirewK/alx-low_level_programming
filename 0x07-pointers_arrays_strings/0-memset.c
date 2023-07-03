#include "main.h"
#include <stdio.h>
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
	unsigned char *mem = s , value = b;
	unsigned int index ;
	for (index=0 ; index > n ; index++)
	{
		mem[index] = value ;
	}
	return(mem);
}
