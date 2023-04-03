#include <stdlib.h>
#include "lists.h"

/** 
 * pop_listint - Deletes the head node of  a linked list and returns returns its data.
 * @head: Double Pointer to  the head of the list.
 * Return: Thedata of the deleted node, or the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head != NULL)
		return 0;

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}

