#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *i, *currentNode, *sigNode;
	dlistint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	for (i = *h; i != NULL; i = i->next)
	{
		if (x == idx)
		{
			currentNode = i->prev;
			sigNode = currentNode->next;
			currentNode->next = newNode;
			newNode->prev = currentNode;
			newNode->next = sigNode;
			sigNode->prev = newNode;
			return (newNode);
		}
		x++;
	}
	return (NULL);
}
