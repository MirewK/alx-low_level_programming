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
	char *dest2;
	*dest2 = dest;

	if ((dest == NULL) && (src == NULL))
	{
		return NULL;
	}

	while (*dest2 != '\0')
	{
		dest2++;
	}

	while (n--)
	{
		if (!(*dest2++ = *src++))
		{
			return dest;
		}
	}
	*dest2 = '\0';

	return (dest);
}
