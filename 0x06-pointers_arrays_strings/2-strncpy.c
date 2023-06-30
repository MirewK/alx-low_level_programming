#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @*dest: destination string
 * @*src: source string
 * @n: length of the caracter to be copied
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	if ((dest == NULL) && (src == NULL))
		return NULL;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
