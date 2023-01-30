#include "lists.h"
/**
 *add_nodeint - fun that add newNode to the begining of list
 *@head: pointer to the first element of the list
 *@int: the data of the node we want to add
 *Return: the address of the newNode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *intNode;

	intNode = malloc(sizeof(listint_t));
	if (intNode == NULL)
		return (NULL);

	intNode->next = *head;
	intNode->n = n;
	*head = intNode;
	
	return (intNode);
}
