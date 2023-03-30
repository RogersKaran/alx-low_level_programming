#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: string to add to the new node.
 *
 * Return: the address of the new element; NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node;
       	unsigned int n = 0;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		
		new_node->next = NULL;
		*head = new_node;
		new_node->str = strdup(str);
		while (str[n] != '\0')
			n++;
		new_node->len = n;
	}
	else
	{
		end_node = *head;
		while (1)
		{
			if (end_node->next == NULL)
				break;
			end_node = end_node->next;
		}
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = NULL;
		end_node->next = new_node;
		new_node->str = strdup(str);

		while (n <strlen(str))
				n++;
		new_node->len = n;
	}
	return (new_node);
}
