#include "function_pointers.h"

/**
 * int_index - function to find the index of and integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the array
 *
 * Return: on success 0 on error -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && CMP != NULL)
		{
			while(i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
