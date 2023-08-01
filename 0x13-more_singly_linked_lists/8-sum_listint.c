#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of a listint_t
 * @head: pointer to head of the node
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
