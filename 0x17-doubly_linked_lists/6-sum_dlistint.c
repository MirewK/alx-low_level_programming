#include "lists.h"

/**
 * sum_dlistint - gives the sum of all the data in the doubly linked list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: sum of the doubly linked list data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
