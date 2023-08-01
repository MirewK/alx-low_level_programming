#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the node
 *
 * Return: head node
 */

int pop_listint(listint_t **head)
{
	listint_t *headptr;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	headptr = *head;
	*head = (*head)->next;
	free(headptr);
	return (data);
}
