#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer that points to the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
