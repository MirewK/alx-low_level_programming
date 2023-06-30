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
	int i;
	i = 0;
	while (i <n && *(src + i))
	{
		*(des + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
