#include "lists.h"
/**
 * add_nodeint - adds a node to the list
 * @head: pointer to the head
 * @n: number of node
 *
 * Return: pointer to the head on success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
