#include "main.h"

/**
 * puts2 -Prints every other charater of  string
 * @str: The string to be treated
 * REturn: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
