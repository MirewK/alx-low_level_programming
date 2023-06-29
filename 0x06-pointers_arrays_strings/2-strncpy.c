#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @*dest: destination string
 * @*src: source string
 * @n: length of the caracter to be copied
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	n = 0;

	for (n = 0; src[n] != '\0'; i++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
}
