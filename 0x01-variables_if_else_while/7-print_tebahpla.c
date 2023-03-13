#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
