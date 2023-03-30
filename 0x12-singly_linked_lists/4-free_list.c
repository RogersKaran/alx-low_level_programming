#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free linked list_t
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}
}
