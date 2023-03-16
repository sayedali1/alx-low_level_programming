#include "lists.h"
/**
 * print_dlistint - fun that print a linked list
 * @h: pointer to the first element in the list
 * Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (i);
}
