#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print a triangle followed by a new line
 * @size: sixe of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
				putchar('#');
			putchar('\n');
		}
	}
}
