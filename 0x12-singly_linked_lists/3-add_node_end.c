#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the head of a list
 * @str: string to be added on the new node that is added to the end of a list
 *
 * Return: the address of the new element of NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *newhead, *last;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);
	temp = strdup(str);

	if (str == NULL)
	{
		free(newhead);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newhead->str = temp;
	newhead->len = len;
	newhead->next = NULL;

	if (*head == NULL)
		*head = newhead;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newhead;
	}
	return (*head);
}
