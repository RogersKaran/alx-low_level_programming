#include <stdio.h>

/**
 * _strlen - Returns the length of the string.
 * @s: the intiating character
 * Return: The length of @str.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
