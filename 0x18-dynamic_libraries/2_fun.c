#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: number to be checked
 *
 * Return: 1 success, 0 unsuccess
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _strlen - gives the length of a string
 * @s: pointer of the first character in the string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _puts - prints the string
 * @str: is pointers starting point of the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _strcpy - copies the string poited to 
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: returns the copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}

/**
 * _atoi - convert a string to an integer
 * @s: pointer of the string to be converted
 *
 * Return: integers
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ui = 0;
	int m = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			ui = (ui * 10) + (s[c] = '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;
	}
	ui *= m;
	return (ui);
}
