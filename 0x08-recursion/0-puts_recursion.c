#include "main.h"

/**
 * _puts_recursion - recursive function that ptints a string + new line char
 * @s: Pointer to a character array (string).
 *
 * Return: the first character of the string with a recursive call to function.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
