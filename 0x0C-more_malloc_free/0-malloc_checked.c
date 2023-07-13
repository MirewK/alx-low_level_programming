#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory allocated
 *
 * Return: on success pointer of the memory allocated and when fails 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;
	int n;

	ptr = malloc(sizeof(*ptr) * n);

	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		return (*ptr);
	}
}
