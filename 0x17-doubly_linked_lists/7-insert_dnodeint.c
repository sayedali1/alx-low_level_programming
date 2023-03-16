#include "lists.h"

/**
 * insert_dnodeint_at_index - fun that create new node and at in in given index
 * @h: pointer the the first element
 * @idx: given index
 * @n: given data
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode = NULL;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	for (i = 0; (i < idx - 1 && temp != NULL); i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	newNode->prev = temp;
	newNode->next = temp->next;
	(temp->next)->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
