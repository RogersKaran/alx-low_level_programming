#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - Counts the number of characters at the beginnning of a string
 * @s: A pointer to the string search.
 * @accept: A pointer to the set of acceptable characters
 *
 * Return: A pointer to the first occurence of a given character in a string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
