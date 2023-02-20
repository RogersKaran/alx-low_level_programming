#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
