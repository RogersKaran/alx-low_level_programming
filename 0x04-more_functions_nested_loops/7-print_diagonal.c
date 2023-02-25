#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n num of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0) {   // print only new line if n is 0 or negative
		_putchar('\n');
		return;
	}
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');   // print the character '\'
		_putchar('\n');   // print a new line character
	}
}
