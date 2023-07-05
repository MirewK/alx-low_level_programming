#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: pointer of the string
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
