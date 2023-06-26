#include "main.h"

/**
 * swap_int - swaps the two numbers given
 *
 *@temp: temporary variable to hold value of pointer a
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
