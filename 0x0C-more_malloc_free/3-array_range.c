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
	if (min > max)
		return (NULL);

	int *arr = ((malloc(*sizeof(max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
