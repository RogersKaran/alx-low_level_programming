#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - Make the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
