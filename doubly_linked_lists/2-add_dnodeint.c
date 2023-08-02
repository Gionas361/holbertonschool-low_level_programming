#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - adds a new node to the top of the list.
 *
 * @head: the list given to us.
 * @n: integer of node?
 *
 * Return: pointer to node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodepointer;

	nodepointer = malloc(sizeof(dlistint_t));

	if (nodepointer == NULL)
	{
		return (NULL);
	}

	nodepointer->n = n;
	nodepointer->next = *head;

	*head = nodepointer;

	return (nodepointer);
}
