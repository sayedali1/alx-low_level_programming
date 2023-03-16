#include "lists.h"
/**
 * dlistint_len - fun that get the len of a linked list
 * @h: pointer the the first element in the list
 * Return: the len of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
