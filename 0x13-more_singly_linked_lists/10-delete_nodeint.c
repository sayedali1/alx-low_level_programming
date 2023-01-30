#include "lists.h"
/**
 * delete_nodeint_at_index - fun that delete node from givin position
 * @head: pointer to the frist node
 * @index: poistion of the node we want to delete
 * Return: 1 if it success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);

		return (1);
	}

	for (i = 0; (i < index - 1 && temp != NULL); i++)
	{
		temp = temp->next;
	}

	if (i != (index - 1) || temp->next == NULL)
		return (-1);
	/* make the prvious node points to the next one after delete */
	temp2 = temp->next;
	temp->next = temp->next->next;
	free(temp2);

	return (1);
}
