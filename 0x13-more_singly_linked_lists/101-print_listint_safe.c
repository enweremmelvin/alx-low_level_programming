#include "lists.h"

/**
 * print_listint_safe - print node of a linked list by iterating once
 *
 * @h: head of linked list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int size = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		size++;

		if (size == 9)
			break;
	}

	if (size == 0)
		exit(98);

	return (size);
}
