#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints the name using pointer to a function.
 * @name: Added string.
 * @f: Pointer to function.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
