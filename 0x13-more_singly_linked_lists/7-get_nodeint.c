#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: head node
 * @index: index of the list
 *
 * Return: on success the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
