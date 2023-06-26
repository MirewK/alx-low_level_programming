#include "main.h"

/**
 * swap_int - swaps the two numbers given
 *
 *@n: temporary variable to hold value of pointer a
 *@a: first digit on the left
 *@b: second digit on the right
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
