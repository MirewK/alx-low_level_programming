#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 * @head: head of the last node
 * @n: counter to the last node
 *
 * Return: the head of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (new_node);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}
