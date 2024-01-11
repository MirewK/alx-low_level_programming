#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of the double linked list
 * @head: pointer to the head of the list
 * @n: number of elements
 *
 * Return: address of the added element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ele;
	dlistint_t *h_new;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->prev = NULL;
	h_new = *head;

	if (h_new != NULL)
	{
		while (h_new->prev != NULL)
			h_new = h_new->prev;
	}

	new_ele->next = h_new;

	if (h_new != NULL)
		h_new->prev = new_ele;

	*head = new_ele;

	return (new_ele);
}
