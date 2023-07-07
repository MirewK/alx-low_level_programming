#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @agrc: argument counter
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
