#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src.
 * @dest: a pointer to the string to concatenate.
 * @src: The source string to be appendeded to @dest.
 *
 * Return: A point to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
