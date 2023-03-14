#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Hypothetical fxn that conca 2 strings.
 * @s1: First argument.
 * @s2: Second argument.
 *
 * Return: Concat it
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	char *concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
