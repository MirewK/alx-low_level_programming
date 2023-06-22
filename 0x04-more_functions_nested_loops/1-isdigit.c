#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: number to be checked
 *
 * Return: 1 success, 0 unsuccess
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
