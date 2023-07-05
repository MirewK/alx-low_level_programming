#include "main.h"
/**
 * _pow_recursion - returns x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: -1 if y is lower than 0 otherwise result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
