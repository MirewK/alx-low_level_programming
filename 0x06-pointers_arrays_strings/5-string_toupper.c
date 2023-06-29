#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>
/**
 * string_toupper - changes the lowercase to upper
 *
 * Return: uppercase
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int)str[i] - 32;
	}
	return str;
}
