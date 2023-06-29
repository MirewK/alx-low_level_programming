#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compers the two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Returns:
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return (0);
}
