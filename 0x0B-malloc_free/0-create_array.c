#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array.
 * @size: Specifies the size of the array to be created.
 * @c: Character to use for intializing each element.
 *
 * Return: The array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	unsigned int i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
