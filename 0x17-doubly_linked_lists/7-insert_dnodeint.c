#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 *
 * @h: head of linked list
 * @idx: index to insert new node at
 * @n: value for n field of new node
 *
 * Return: address of new node; NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int node_index;

	temp = *h;
	node_index = 0;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (idx == node_index)
		{
			if (node_index > 0)
			{
				new_node->n = n;
				new_node->next = temp;
				new_node->prev = temp->prev;
				temp->prev->next = new_node;
				temp->prev = new_node;
			}
			if (node_index == 0)
			{
				new_node->n = n;
				new_node->next = temp;
				new_node->prev = NULL;
				*h = new_node;
			}
			break;
		}
		node_index += 1;
		temp = temp->next;
	}
	if (idx > node_index)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
