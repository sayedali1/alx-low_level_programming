#include "lists.h"
/**
 *print_listint - fun that print a linked list
 *@h: head of the linked list
 *Return: the num of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *intNode = h;
	int element = 0;

	while (intNode != NULL)
	{
		printf("%d\n", intNode->n);
		element++;
		intNode = intNode->next;
	}
	return (element);
}
