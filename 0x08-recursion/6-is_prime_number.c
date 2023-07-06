#include "main.h"

/**
 * is_prime_number - checks if the input number is prime or not
 * @n: the number to be checked
 *
 * Return: 1 if its prime and 0 if not
 */

int is_prime_number(int n)
{
	int i;

	i = n / 2;

	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
}
