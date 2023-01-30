#include "lists.h"
/**
 * free_listint2 - fun that free list and set head to null
 * @head: pointer to the first element in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
