#include <stdio.h>
#include "main.h"

/**
 * cap_string - changes all string into capital
 * @s: string to be changed
 *
 * Return: string s in capital
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;

	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i -1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
