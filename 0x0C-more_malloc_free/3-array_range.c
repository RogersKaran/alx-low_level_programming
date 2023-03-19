#include "main.h"
#include <stdlib.h>

/**
 * array_range - Checks the range of an array.
 * @min: checks
 * @max: checks
 *
 * Return: Null (unsuccessful) & arr (successful)
 */

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}


	return (arr);
}
