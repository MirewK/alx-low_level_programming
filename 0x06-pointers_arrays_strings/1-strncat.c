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
	char destination[50];
	char source[50];

	int i;
	int j;

	dest = destination;
	src = source;
	i = 0;
	j = 0;

	while (destination[i] != '\0')
	{
		++dest;
		i++;
	}
	while (source[j] != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		j++;
	}
	return dest;
}
