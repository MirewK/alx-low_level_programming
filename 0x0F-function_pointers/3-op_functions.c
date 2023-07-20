#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: the sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substructs two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: the difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: product of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: remender
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: remender
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a % b);
}
