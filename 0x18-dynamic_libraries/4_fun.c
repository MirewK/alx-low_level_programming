#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory address
 * @n: bytes to be copied
 *
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: string that holds the character to be located
 * @c: the character located
 *
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	unsigned int index = 0;

	for (; *(s + index) != '\0'; index++)
		if (*(s + index) == c)
			return (s + index);
	if (*(s + index) == c)
		return (s + index);

	return ('\0');
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be segmented
 * @accept: bytes accepted
 *
 * Return: the number of segmented bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, seg;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		seg = 1;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				seg = 0;
				break;
			}
		}
		if (seg == 1)
			break;
	}
	return (1);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked for occurrence
 * @accept: the occurrence checker reference
 *
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + 1) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}

/**
 * _strstr - finds the first occurance
 * @haystack: the string to be checked in for the occurance
 * @needle: the string to be found
 *
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
