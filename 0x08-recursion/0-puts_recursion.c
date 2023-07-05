#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: pointer of the string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	_puts_recursion(s + 1);
}
