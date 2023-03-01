#include "main.h"

/**
 * string_toupper - turns all the lowercase letters of a string to uppercase.
 * @str:The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

#include <ctype.h>

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
