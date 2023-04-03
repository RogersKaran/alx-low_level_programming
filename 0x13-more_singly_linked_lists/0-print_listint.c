#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_f list
 * @h: Pointer to the head node of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t  count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
