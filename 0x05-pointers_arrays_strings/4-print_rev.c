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
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
