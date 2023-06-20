#include <unistd.h>
#include "main.h"

/**
 * _putchar - defines putchar
 *
 * return = always (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
