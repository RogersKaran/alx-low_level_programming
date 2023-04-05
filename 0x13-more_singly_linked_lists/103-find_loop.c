#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a singly linked list of ints
 * @head: Pointer the first node of the list.
 *
 * Return: The address of the node or NULL if it fails it.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;

		fast = fast->next->next;

		if (slow == fast)
		{
			slow  = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}

	return (NULL);
}
