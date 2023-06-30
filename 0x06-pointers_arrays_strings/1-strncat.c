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

char *_strncat(char *dest, char *src, size_t n)
{

	if ((dest == NULL) && (src == NULL))
	{
		return NULL;
	}

	while (*dest != '\0')
	{
		dest++;
	}

	while (n--)
	{
		if (!(*dest++ = *src++))
		{
			return dest;
		}
	}
	*dest = '\0';

	return (dest);
}
