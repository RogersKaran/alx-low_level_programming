#include "main.h"
#include <stdio.h>

/**
 * print_line -draws a straight line kwa terminal
 * @n: num of times the character _ should print
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
