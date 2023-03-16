#include "lists.h"

/**
 * sum_dlistint - fun that sum all the data elements in the list
 * @head: pointer to the first element in the list
 * Return: sum of the data elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int sum = 0;

	if (head == NULL) /* if empty list */
		return (0);
	/* walk through the list */
	while (temp)
	{
		sum += temp->n; /* sum each element */
		temp = temp->next;
	}
	return (sum);
}
