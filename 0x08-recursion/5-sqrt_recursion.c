#include "main.h"

/**
 * sqrt_check - check if a number can go out of the squar root
 * @b: base of the square root
 * @c: number to find the square root
 *
 * Return: -1 if it doesnt have a square root or c if there is
 */
int sqrt_check(int b, int c)
{
	if (b * b == c)
	{
		return (b);
	}
	if (b * b > c)
	{
		return (-1);
	}
	return (sqrt_check(b + 1, c));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number to be checked
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));
}
