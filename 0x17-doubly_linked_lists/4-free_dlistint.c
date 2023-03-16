#include "lists.h"

/**
 * free_dlistint - fun that free linked list
 * @head: pointer to the first of the element of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
