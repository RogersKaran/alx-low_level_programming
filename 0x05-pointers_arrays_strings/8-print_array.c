#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n:Number of elements of the array to  printed
 * Return: void
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}