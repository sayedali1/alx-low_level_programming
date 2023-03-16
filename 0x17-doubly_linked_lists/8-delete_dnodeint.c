#include "lists.h"
/**
 * delete_dnodeint_at_index - fun that delete node at given index
 * @head: pointer to the first node
 * @index: index of the node we want to delete
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *nxtNode = NULL, *prvNode = NULL;
	unsigned int i;
	/* walk through the given index */
	for (i = 0; (i < index && temp != NULL); i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);
	/* not the first index */
	if (index != 0)
	{
		prvNode = temp->prev; /* points to the prev node */
		if (prvNode != NULL)
			prvNode->next = temp->next; /* prv node points to the next node */
		nxtNode = temp->next; /* points to the next node */
		if (nxtNode != NULL)
			nxtNode->prev = temp->prev; /* next node points to the prv node */
	}
	else
	{
		nxtNode = temp->next; /* points to the next node */
		if (nxtNode != NULL)
			nxtNode->prev = temp->prev; /* next node points to the prv node */
		*head = nxtNode; /* head points to the next node */
	}
	free(temp);
	return (1);
}
