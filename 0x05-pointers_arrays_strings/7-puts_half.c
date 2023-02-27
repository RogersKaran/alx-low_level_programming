#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	
	if (len % 2 == 1)
	{
		start += 1;
	}
	
	for (int i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
