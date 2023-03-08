#include "main.h"
#include <string.h>

/**
 * is_palindrome - Finds the len
 * @s: String to check
 * Return: 1 (success) & 0 (Fail)
 */

int is_palindrome(char *s)
{
	int i, j;

	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}
	return (1);
}
