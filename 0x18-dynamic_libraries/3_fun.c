#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	size_t i = 0;
	size_t j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

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
	char *s1 = dest;

	if (dest == 0 || src == 0)
	{
		return (0);
	}
	while (*s1 != '\0')
	{
		s1++;
	}
	while (n--)
	{
		if (!(*s1++ = *src++))
		{
			return (dest);
		}
	}
	*s1 = '\0';

	return (dest);
}

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: length of the character to be copied
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

/**
 * _strcmp - compares the two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer that locates the memory space to be filled
 * @b: character to be filled
 * @n: numbers of characters
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
