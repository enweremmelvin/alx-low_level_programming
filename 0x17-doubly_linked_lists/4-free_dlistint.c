#include <stdlib.h>
#include "lists.h"

/**
 * free_dlisting - free memory allocated for a doubly linked list
 *
 * @head: head of the linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

	return;
}
