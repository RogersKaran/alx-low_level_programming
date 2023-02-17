#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
