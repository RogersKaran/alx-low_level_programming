#include "lists.h"

/**
 * delete_nodeIint_at_index - Deletes a node at a given position.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), -1 (otherwise).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	prev_node = NULL;
	current_node = *head;
	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (-1);
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}
