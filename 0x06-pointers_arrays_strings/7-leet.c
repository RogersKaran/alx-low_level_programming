#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: the string to encode
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	int i, j;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char number[] = {'4', '3', '0', '7', '1'};

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (ptr[i] == letter[j] || ptr[i] == letter[j] - 32)
			{
				ptr[i] = number[j];
			}
		}
	}
	return (str);
}
