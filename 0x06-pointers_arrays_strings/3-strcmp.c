#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compers the two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Returns:
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
