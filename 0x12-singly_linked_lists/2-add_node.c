#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginnning of a list_t list.
 * @head: Pointer toa pointetr to the head of the list.
 * @str: String to add to the new node.
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int n = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (n < strlen(str))
		n++;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
