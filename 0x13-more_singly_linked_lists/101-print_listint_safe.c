#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a singly list of ints.
 * @head:  Pointer to the first node of the list.
 *
 * Return: Nmber of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}

		count++;
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}

	if (fast != NULL && fast->next != NULL)
	{
		printf("-> [%p] %d\n", (void *)fast, fast->n);
		exit(98);
	}

	return (count);
}
