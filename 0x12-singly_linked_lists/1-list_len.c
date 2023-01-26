#include "lists.h"
/**
*list_len - fun that calc the num of elements in linked list
*@h: pointer to the first element of the list
*Return: num of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int i;

	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	/* num of elements */
	return (i);
}
