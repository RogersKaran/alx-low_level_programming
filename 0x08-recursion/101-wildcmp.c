#include "main.h"
#include <string.h>

/**
 * wildcmp - Fxn comparing 2 strings
 * @s1: 2 starts with a *, recursively check s1 against the substring
 * @s2: After the * until we find a match or run out of s1.
 *
 * Return: 1 (identical) and 0 (not identical)
 */

int wildcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
		return (1);

	if (*s2 == '\0')
		return (0);

	if (*s2 == '*')
	{
		int i;

		for (i = 0; s1[i] != '\0'; i++)
		{
			if (wildcmp(s1 + i, s2 + 1))
				return (1);
			return (wildcmp(s1 + i, s2 + 1));
		}

		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));

	}
	return (0);
}
