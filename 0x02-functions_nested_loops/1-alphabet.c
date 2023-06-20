#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
