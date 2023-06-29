#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t des_len = strlen(dest);
	size_t i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return dest;
}
