#include "lists.h"
/**
*print_list - fun that print elements of a linked list
*@h: pointer to the head of linked list
*Return: the num of elements of the linked list
*/
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int elements = 0;

	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		temp = temp->next;
		elements++;
	}
	return (elements);
}
