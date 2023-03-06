#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Takes the square matrix of integers and calculates the sum
 * @a: The first elements of a square matrix.
 * @size: Reps the size of the matrix.
 *
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size * size)
	{
		sum1 += a[i];
		i += size + 1;
	}

	i = size - 1;

	while (i < size * size - 1)
	{
		sum2 += a[i];
		i += size - 1;
	}

	printf("Sum of diagonal 1: %d\n", sum1);
	printf("Sum of diagonal 2: %d\n", sum2);
}
