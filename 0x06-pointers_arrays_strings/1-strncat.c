#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source of string
 * @n: number of characters
 *
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s1 = dest;

	if (dest == 0 || src == 0)
	{
		return 0;
	}
	while (*s1 != '\0')
	{
		s1++;
	}
	while (n--)
	{
		if (!(*s1++ = *src++))
		{
			return dest;
		}
	}
	*s1 = '\0';
	return (dest);
}
