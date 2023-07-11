#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 * @size: size of memory
 * @c: character
 *
 * Return: return a ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
	free(ptr);
}
