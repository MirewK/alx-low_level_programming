#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: destinetion of the string
 * @src: source of the string
 * Return: returns the copy of the string
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}
