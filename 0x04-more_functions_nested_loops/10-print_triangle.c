#include "main.h"

/**
 * print a triangle followed by a new line
 * @size: sixe of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	int i, j;
	
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');   // print the character '#'
		}_putchar('\n');   // print a new line character
	}
}
