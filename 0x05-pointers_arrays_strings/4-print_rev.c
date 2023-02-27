#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);
	
	for (int i = len - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}

