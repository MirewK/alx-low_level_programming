#include "main.h"
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
