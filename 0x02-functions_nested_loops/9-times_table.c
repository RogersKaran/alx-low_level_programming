#include "main.h"

/**
 * times_table -Prints the 9 times table starting from 0
 * Return: empty output
 */

#include <stdio.h>

void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("9 x %d = %d\n", i, i * 9);
	}
}
