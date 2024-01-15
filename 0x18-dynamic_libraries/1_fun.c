#include "main.h"

/**
 * _putchar - defines putchar
 *
 * Return: always (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: the number to begin
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - check if its a character
 * @c: the number to begin
 *
 * Return: always 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - calculate the absolute value of a num
 * @n: the number to begin
 *
 * Return: on success the abs of the num
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

/**
 * _isupper - check for uppercase characters
 * @c: the character to be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
