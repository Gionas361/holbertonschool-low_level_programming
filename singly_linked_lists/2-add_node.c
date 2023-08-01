#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node to the top of the list.
 *
 * @head: the list given to us.
 * @str: name of node?
 *
 * Return: nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodepointer;
	int len;
	char *str2;

	nodepointer = malloc(sizeof(list_t));

	if (nodepointer == NULL)
	{
		return (NULL);
	}

	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(nodepointer);
		return (NULL);
	}

	for (len = 0; str2[len] != '\0' ; len++)
	{}

	(*nodepointer).str = str2;
	(*nodepointer).len = len;
	(*nodepointer).next = *head;

	*head = nodepointer;

	return (nodepointer);
}
