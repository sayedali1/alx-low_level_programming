#include "lists.h"
/**
 * pop_listint - fun that return the first element in the list
 * @head: pointer to the first element on the list
 * Return: the element of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num;

	if (*head == NULL)
		return (0);

	*head = temp->next;
	num = temp->n;

	free(temp);
	return (num);
}
