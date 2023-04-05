#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a singly list of integers.
 * @h: Pointer to a pointer to the first node of the list
 *
 * REturn: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
	listint_t *fast = *h;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;

			while (slow != fast)
			{
				*h = slow->next;
				free(slow);
				count++;
				slow = *h;
			}

			while (slow == fast)
			{
				*h = slow->next;
				free(slow);
				count++;
				if (*h == fast)
					break;
				slow = *h;
			}

			*h = NULL;
			return (count);
		}

		free(*h);
		count++;

		*h = (*h)->next;
	}

	while (*h != NULL)
	{
		free(*h);
		count++;
	}

	*h = NULL;

	return (count);
}
