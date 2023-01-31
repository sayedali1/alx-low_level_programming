#include "lists.h"
/**
 * reverse_listint - fun that reverse linked list
 * @head: pointer to the first node of linked list
 * Return: pointer to the header
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
