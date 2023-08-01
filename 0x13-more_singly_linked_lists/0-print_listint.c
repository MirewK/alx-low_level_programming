#include "lists.h"

/**
 * print_listint - prints a list of integers
 * @h: pointer that points the structure
 *
 * Return: always success 
 */

size_t pritn_listint(const listint_t *h)
{
	unsigned int temp = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		temp += 1;
		h = h->next;
	}
	return (temp);
}
