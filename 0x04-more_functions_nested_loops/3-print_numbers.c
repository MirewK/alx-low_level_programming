#include "main.h"

/**
 * print_numbers - only 0 to 9 integers will be printed
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
