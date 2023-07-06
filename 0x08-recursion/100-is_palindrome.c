#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		if (s == (is_palindrome(s + 1)))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
