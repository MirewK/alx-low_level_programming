#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head node
 * @index: index of node to be deleted
 *
 * Return: 1 on success and -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *exact = *head;
	listint_t *node;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(exact);
		return (1);
	}
	while (exact)
	{
		if (i == index - 1)
		{
			node = exact->next;
			exact->next = node->next;
			free(node);
			return (1);
		}
		exact = exact->next;
		i++;
	}
	return (-1);
}
