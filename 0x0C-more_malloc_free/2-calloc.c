#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory dynamically.
 * @size: size of p
 * @nmemb: Represents the size of objects in memory.
 *
 * Return: The pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	while (i < l)
	{

		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
