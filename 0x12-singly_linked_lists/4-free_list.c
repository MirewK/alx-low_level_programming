#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the head that will be freed
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
