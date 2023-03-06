#include "main.h"

/**
 * _memset - A function that fills a block of memory with a specified vaue
 * @s: A pointer to the memory area of a variable
 * @b: The byte to fill with
 * @n: The number f bytes to fill
 *
 * Return: The original pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
