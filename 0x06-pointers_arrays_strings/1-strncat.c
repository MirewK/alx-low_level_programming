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
	size_t i;
	int a;
	size_t b;

	i = strlen (dest);
	b = i;
	a = 0;

	if (dest == 0 || src == 0)
	{
		return 0;
	}

	while (a < n && src[a] != '\0')
	{
		dest[i++] = src[a++];
	}

	dest[i] = '\0';

	return (dest);
}
