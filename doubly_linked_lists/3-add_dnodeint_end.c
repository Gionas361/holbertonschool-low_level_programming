#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of the list.
 *
 * @head: the list given to us.
 * @n: integer of node?
 *
 * Return: pointer to node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodepointer, *nodepointed;

	nodepointer = malloc(sizeof(dlistint_t));

	if (nodepointer == NULL)
	{
		return (NULL);
	}

	(*nodepointer).n = n;
	(*nodepointer).next = NULL;

	if (*head == NULL)
	{
		(*nodepointer).prev = NULL;
		*head = nodepointer;
		return (nodepointer);
	}

	nodepointed = *head;
	while ((*nodepointed).next != NULL)
	{
		nodepointed = (*nodepointed).next;
	}
	(*nodepointed).next = nodepointer;
	(*nodepointer).prev = nodepointed;

	return (nodepointer);
}
