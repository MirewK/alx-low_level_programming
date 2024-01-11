#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the doubly linked list
 * @head: pointer to the head of the list
 * @n: number of the element
 *
 * Return: pointer to the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h_new;
	dlistint_t *new_ele;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = NULL;

	h_new = *head;

	if (h_new != NULL)
	{
		while (h_new->next != NULL)
			h_new = h_new->next;
		h_new->next = new_ele;
	}
	else
	{
		*head = new_ele;
	}

	new_ele->prev = h_new;

	return (new_ele);
}
