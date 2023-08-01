#include "lists.h"
/**
 * listint_len - lists the number of nodes
 * @h: pointer that point the structure
 *
 * Return: list of  nodes on success
 */

size_t listint_len(const listint_t *h)
{
	unsigned int temp = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		temp += 1;
		h = h->next;
	}
	return (temp);
}
