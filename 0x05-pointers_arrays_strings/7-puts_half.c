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
	int length = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}

	int half_length = (length - 1) / 2;

	if (length % 2 == 0)
	{
		str += half_length;
	}
	else
	{
		str += half_length + 1;
	}
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

