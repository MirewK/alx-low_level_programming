#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	while (*s = '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
