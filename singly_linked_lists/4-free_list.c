#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees all the nodes in a linked list
* @head: pointer to the first node in the list
*/
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
