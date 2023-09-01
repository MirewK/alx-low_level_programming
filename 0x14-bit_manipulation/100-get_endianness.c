#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 */
int get_endianness(void)
{
	int num = 1;

	char *endi = ((char *) & num);

	if (*endi == 1)
		return (1);

	return (0);
}
