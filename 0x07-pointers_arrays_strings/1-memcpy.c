#include "main.h"

/**
 * _memcpy - Copies a block of memory from a source to a destination location
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: the number of bytes to copy
 *
 * Return: the original pointer 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
