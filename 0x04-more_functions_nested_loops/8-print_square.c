#include "main.h"

/**
 * print a square followed  by a new line
 * 0size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');   // print the character '#'
		}
		_putchar('\n');   // print a new line character
	}
}
