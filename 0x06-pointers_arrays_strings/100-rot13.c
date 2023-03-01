#include "main.h"

/**
 * rot13 -Encodes a string using rot13
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	char *ptr = str;
	int i, j;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((ptr[i] >= 'a' && ptr[i] <= 'm') || (ptr[i] >= 'A' && ptr[i] <= 'M'))
			{
				ptr[i] += 13;
				break;
			}
			if ((ptr[i] >= 'n' && ptr[i] <= 'z') || (ptr[i] >= 'N' && ptr[i] <= 'Z'))
			{
				ptr[i] -= 13;
				break;
			}
		}
	}
	return (str);
}
