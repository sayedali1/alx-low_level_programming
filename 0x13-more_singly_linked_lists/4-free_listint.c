#include "lists.h"
/**
 * free_listint - fun that free a linked list
 * @head: pointer to the head of the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
