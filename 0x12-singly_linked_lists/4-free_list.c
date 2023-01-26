#include "lists.h"
/**
*free_list - fun that free linked list
*@head: pointer to the head of the linked list
*/
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		/* make the node points to what the head points to */
		node = head;
		/* make the header looks to the next node */
		head = head->next;
		/* free the prevoiuse node */
		free(node->str);
		free(node);
	}
}
