#include "lists.h"

/**
 * add_dnodeint - fun that add node to the end of a list
 * @head: pointer to the first element of a list
 * @n: data
 * Return: address to the newNode, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	/* create new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	/* fill the new node with elements */
	newNode->n = n;
	newNode->prev = NULL; /* make the perv points to null */
	/* if the list in empty */
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head; /* new node points to the next node */
		(*head)->prev = newNode; /* current node point to the new one */
		*head = newNode; /* the head points to the new node  */
	}
	return (newNode);
}
