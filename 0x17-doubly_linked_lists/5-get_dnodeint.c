#include "lists.h"

/**
 * get_dnodeint_at_index - fun that get node at given index
 * @head: pointer to the first element in the list
 * @index: the index in the last
 * Return: pointer to the wanted node, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;
	/* walk through to the list to the given index */
	for (i = 0; (i < index && temp != NULL); i++)
		temp = temp->next;
	/* if no element */
	if (temp == NULL)
		return (NULL);

	return (temp);
}
