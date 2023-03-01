#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: the string to captilize
 *
 * Return: A pointer to the changed string.
 */

#include <ctype.h>

char *cap_string(char *str)
{
	int i;
	char *ptr = str;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (i == 0 || isspace(ptr[i - 1]))
		{
			ptr[i] = toupper(ptr[i]);
		}
		else
		{
			ptr[i] = tolower(ptr[i]);
		}
	}
	return (str);
}
