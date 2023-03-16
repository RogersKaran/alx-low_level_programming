#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - 
 * @ptr: 
 * @b: Unsigned integer as input.
 *
 * Exit: Terminates the process with status value 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (ptr);
}
