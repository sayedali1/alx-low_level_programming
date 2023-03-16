#include "lists.h"

/**
 * add_dnodeint_end - fun that add node to the end of a list
 * @head: pointer to the first element of a list
 * @n: data
 * Return: address to the newNode, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *newNode = NULL;

	/* create new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	/* fill the node with element */
	newNode->n = n;
	newNode->next = NULL; /* new node points to null */

	/* if empty list */
	if (*head == NULL)
	{
		*head = newNode;
		(*head)->prev = NULL;
	}
	else
	{
		/* walk trought the last element in the list */
		while (temp->next)
			temp = temp->next;
		temp->next = newNode; /* current node pointer to the new node */
		newNode->prev = temp; /* newNode points to the prev node */
	}
	return (newNode);
}
