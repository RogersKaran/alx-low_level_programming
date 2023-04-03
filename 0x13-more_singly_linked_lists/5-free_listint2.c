#include <stdlib.h>
#include "lists.h"

/**
 * free_listin2 - Frees a linked list of intergers and sets the head to NULL.
 * @head:Pointer t the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
