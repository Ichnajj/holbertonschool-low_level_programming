#include "lists.h"

/**
* sum_dlistint - returns the sum of data (n) of a dlistint_t linked list.
* @head: pointer to the head of the list
*
* Return: the sum of the n values in the list, or NULL if it failed
*/

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
