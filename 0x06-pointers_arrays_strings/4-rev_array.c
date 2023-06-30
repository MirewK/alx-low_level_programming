#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - re-arenge array to the reverse
 * @a: the array to be reversed
 * @n: number of the array
 *
 * Return: Always 0 (success)
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
