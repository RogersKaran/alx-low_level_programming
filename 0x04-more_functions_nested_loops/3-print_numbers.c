#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the digits from 0 to 9
 *
 * Return: All the said numbers
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
}
