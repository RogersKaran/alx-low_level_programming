#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 -Make alphabet x10
 * _putchar: Prints out the result
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
