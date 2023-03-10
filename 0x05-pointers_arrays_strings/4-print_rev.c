#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
		_putchar(s[j]);

	_putchar('\n');
}
