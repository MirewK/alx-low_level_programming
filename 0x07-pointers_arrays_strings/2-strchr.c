#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string that holds the caracter to be located
 * @c: the character located
 *
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int index;
	index = 0;

	while (*s != c)
	{
		++s;
		++index;
	}
	if (*s == c)
	{
		return s + index;
	}
	else
	{
		return 0;
	}
}
