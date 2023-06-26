#include "main.h"

/**
 * rev_string -reverses the string
 *
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char temp;

	while (s[index++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
