#include "lists.h"

/**
 * get_dnodeint_at_index - gives the nth node of a doubly linked list
 * @head: pointer that points to head of the doubly linked list
 * @index: index of the node to get
 *
 * Return: the nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
