#include "main.h"

/**
 * _print_rev_recursion - Takes -> to a string as its arg & recursively prints.
 * @s: Current character to print.
 *
 * Return: The characters in reverse order.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
