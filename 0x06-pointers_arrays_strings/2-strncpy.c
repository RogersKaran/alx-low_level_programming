#include "main.h"

/**
 * _strncpy - copies at most an inputed number of bytes
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The max number of bytes copied from src.
 *
 * Return: A pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}
