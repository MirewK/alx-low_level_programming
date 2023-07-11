#include "main.h"
#include <stdlib.h>

/**
 * _strdup - generate pointer to a new string to duplicate
 * @str: string to be copied
 *
 * Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	nstr = malloc(len * sizeof(*str));
	if (nstr == NULL)
		return (NULL);
	while (i <= len)
	{
		nstr[i] = str[i];
		i++;
	}
	return (nstr);
}
