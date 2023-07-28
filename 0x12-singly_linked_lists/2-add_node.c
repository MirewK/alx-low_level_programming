#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head
 * @str: pointer to be added at the beginning of a list
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(newhead);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	newhead->str = temp;
	newhead->len = len;
	newhead->next = *head;

	*head = newhead;

	return (newhead);
}
