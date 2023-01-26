#include "lists.h"
/**
*add_node - fun that add new node to the linked list
*@head: duoble pointer to points to what head points to
*@str: str that we want to add to the node
*Return: address of the new node, NULL if no str
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	/* create new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);/* duplicate the str in the new node */
	newNode->len = strlen(str);/* add the len to the new node  */
	/* make the newNode points to what head points to  */
	newNode->next = *head;
	/* make the head points to the newNode */
	*head = newNode;
	/* return the address of the newNode created */
	return (*head);
	}
