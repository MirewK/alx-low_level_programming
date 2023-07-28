#include "lists.h"

/**
 * print_list - prints the list of data
 * @h: pointer that points to the list
 *
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *locate = h;
	size_t count = 0;

	while (locate != NULL)
	{
		if (locate->str != NULL)
			printf("[%d] %s\n", locate->len, locate->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		locate = locate->next;
	}
	return (count);
}
