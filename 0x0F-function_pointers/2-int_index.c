#include "function_pointers.h"

/**
 * int_index - Returns index place if comparison = true, else -1.
 * @array: Array
 * @size: The size of elements in the array.
 * @cmp: Pointer to the function  of the 3  in main.
 *
 * Return: 0 (success).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
