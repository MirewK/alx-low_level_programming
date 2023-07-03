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

	if (*s == 0 || n <= 0)
	{
		return s;
	}

	while(*s != '\0' && n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}
