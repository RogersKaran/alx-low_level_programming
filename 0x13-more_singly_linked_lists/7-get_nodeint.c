#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 * Return: The nth node, or NULLL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	return (current);
}
