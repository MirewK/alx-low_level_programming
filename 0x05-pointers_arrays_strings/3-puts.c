#include "main.h"

/**
 * _puts - prints the string
 *
 * @*str: is pointers starting point of the string
 */

void _puts(char *str);
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
