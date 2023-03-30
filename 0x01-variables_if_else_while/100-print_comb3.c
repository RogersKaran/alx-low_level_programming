#include <stdio.h>

/**
 * main - print all possible combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar( '0' + i);
			putchar('0' + j );

			if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}

	putchar('\n');
	return (0);
}
