#include "lists.h"

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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
