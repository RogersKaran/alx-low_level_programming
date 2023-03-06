#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that searches a given string for a specific character.
 * @s: A pointer to the string to search
 * @c: The character to search.
 *
 * Return: A pointer to the null terminator at the end of the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
