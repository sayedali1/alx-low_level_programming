#include "lists.h"
/**
 * add_nodeint_end - fun that add node to the end of a list
 * @head: pointer to the address of the first element
 * @n: integer we want to add to the new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *intNode, *temp;

	/* create new node */
	intNode = malloc(sizeof(listint_t));
	if (intNode == NULL)
		return (NULL);

	/* fill the node with elements */
	intNode->n = n;
	intNode->next = NULL;

	/* if the list is empty */
	if (*head == NULL)
		*head = intNode;
	else
	{
		/* walk though the list */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* make the last element point to the new node */
		temp->next = intNode;
	}

	return (intNode);
}
