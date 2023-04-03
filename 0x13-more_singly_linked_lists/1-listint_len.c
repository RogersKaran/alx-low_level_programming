#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list.
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of elements i the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
