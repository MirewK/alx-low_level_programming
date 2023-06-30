#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: length of the caracter to be copied
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	if ((dest == 0) && (src == 0))
	{
		return 0;
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
