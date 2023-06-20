#include "main.h"
/**
 * print_last_digit - display the last digit
 *
 * Return: always (success)
 */
int print_last_digit(int n)
{
	int 0;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a <0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
