#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be segmented
 * @accept: bytes accepted
 *
 * Return: the number of segmented bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, seg;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		seg = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				seg = 0;
				break;
			}
		}
		if (seg == 1)
			break;
	}
	return (i);
}
