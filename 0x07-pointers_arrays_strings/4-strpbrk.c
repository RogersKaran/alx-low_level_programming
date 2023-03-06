#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - A function that searches a strin or any of a set of bytes.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the set of acceptable bytes.
 *
 * Return: A pointer to the current character in the 's' string.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*p == *s)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}
