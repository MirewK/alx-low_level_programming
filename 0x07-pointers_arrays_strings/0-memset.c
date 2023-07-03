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

	unsigned int index ;
	for (index = 0 ; index < n ; index++)
	{
		s[index] = b ;
	}
	return(s);
}
