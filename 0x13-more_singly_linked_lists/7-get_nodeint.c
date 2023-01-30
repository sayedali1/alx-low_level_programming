#include "lists.h"
/**
 * get_nodeint_at_index - fun that return the node of a given index
 * @head: pointer to the head of the linked list
 * @index: num of node that we want in the list
 * Return: the address of the node, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	/* walk through the list until we get the right index */
	for (i = 0; i < index ; i++)
	{
		temp = temp->next;
	}
	/* if no index */
	if (temp == NULL)
		return (NULL);
	else
		return (temp);/* return the node */

}
