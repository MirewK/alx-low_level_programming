#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - re-arenge array to the reverse
 * @a: the array to be reversed
 * @n: number of the array
 *
 */

void reverse_array(int *a, int n);
{
	/* int a[]; */
	int reverse;
	int i;

	for (i = 0; i < n/2; i++)
	{
		reverse = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = reverse;
	}

	/* return reverse[i]; */
}
