#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -Locks
 * @ptr: Po
 * 
 * Return: NULL (unsuccessful) & new_ptr (successful).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr;
	
	if (new_size > old_size)
		return (0);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		nptr = malloc (new_size);
		
		if (ptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < old_size && i < new_size)
	{
		nptr[i] = ((char *) ptr)[i];
		i++;
	}

	free(ptr);
	return (nptr);
}
