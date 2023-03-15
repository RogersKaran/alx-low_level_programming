#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array.
 * @size: Specifies the size of the array to be created.
 * @c: Character to use for intializing each element.
 *
 * Return: The array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s  = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
