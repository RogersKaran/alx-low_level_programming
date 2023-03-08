#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Bsse case
 * @s: Char to check
 *
 * REturn: The length of a string.
 */

int _strlen_recursion(char *s)
{
	if
		(*s == '\0')
			return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

int main(void)
{
	int str[] = "Hello, world!";

	printf("The length of the string '%s' is %d\n", str, _strlen_recursion(str));
	return (0);
}
