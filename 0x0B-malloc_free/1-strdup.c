#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer to a new (duplicate) string.
 * @str: String of a single argument.
 * @dup:
 * Return: Dup
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dup = malloc(sizeof(char) * (strlen(str) + 1));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
