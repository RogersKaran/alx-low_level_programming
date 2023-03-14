#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table of the input
 * Starting with 0
 * @n: The value of the times table to print
 *
 * Return: void.
 */

void print_times_table(int n)
{
	int i = 0;

	if (n < 0 || n > 15)
	{
		return;
	}

	while (i <= 10)
	{
		printf("%d x %d = %d\n", n, i, n * i);
		i++;
	}
}
