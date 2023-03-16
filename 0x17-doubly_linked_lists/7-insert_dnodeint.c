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
	dlistint_t *temp, *newNode = NULL;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t)); /* create new node */
	if (newNode == NULL)
		return (NULL);

	newNode->n = n; /* add data */

	if (idx == 0) /* if first index */
	{
		newNode->next = *h; /* new node next points to the head */
		newNode->prev = NULL; /* new node prv point to NULL */
		*h = newNode; /* head points to new node */
		return (newNode);
	}

	/* walk through the given idx */
	temp = *h;
	for (i = 0; (i < idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}

	newNode->prev = temp; /* newnode prv points to the current node */
	newNode->next = temp->next; /* newnode next point to the next node */
	if (temp->next != NULL)
		(temp->next)->prev = newNode; /* the nextnode prv points to the new node */
	temp->next = newNode; /* current node points to the next node */

	return (newNode);
}
