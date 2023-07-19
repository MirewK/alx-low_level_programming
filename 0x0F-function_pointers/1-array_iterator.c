#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a fun
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size->0)
	{
		action(*array);
		array++;
	}
}
