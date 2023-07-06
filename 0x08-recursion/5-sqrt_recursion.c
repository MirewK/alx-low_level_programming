#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number to be checked
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	unsigned int i = 1;

	if (n != (i * i))
	{
		i++;
		_sqrt_recursion(n);
		return (i);
	}
	if (n == (i * i))
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
