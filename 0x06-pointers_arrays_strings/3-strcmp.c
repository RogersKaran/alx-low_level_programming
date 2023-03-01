#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: A pointer to the first string of comparison
 * @s2: A pointer to the second string of comparison
 *
 * Return: if str1 < str2, the negative difference
 * Return1: if str1 = str2, 0.
 * Return2: if str1 > str2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;

		s2++;
	}
	return (0);
}
