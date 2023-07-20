#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - contains the main function
 * @argc: argument to copy
 * @argv: argument to paset
 *
 * Return: on success 0 and on error 98
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("ERROR\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
