#include "main.h"

/**
 * wildcmp - compares two strings if they are identical
 * @s1: the first string
 * @s2: second string
 *
 * Return: 1 if the strings are identical and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

