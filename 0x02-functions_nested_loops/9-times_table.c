#include "main.h"

/**
 * times_table -Prints the 9 times table starting from 0
 * Return: empty output
 */

#include <stdio.h>

void times_table(void)
{
	int i, j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}
