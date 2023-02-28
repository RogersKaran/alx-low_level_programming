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
	int n = (len - 1) / 2;
	int i;

	for (i = n + 1; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
