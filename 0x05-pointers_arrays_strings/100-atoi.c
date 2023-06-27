#include "main.h"

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
			ui = (ui * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;

		/* _putchar(s[c]); */
	}
	/* _putchar('\n'); */
	ui *= m;
	return (ui);
}
