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
	size_t i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
