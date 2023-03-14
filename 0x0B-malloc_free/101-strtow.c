#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - Fxn that splits the string into words.
 * @str: Single parameter string to be split into words.
 *
 * Return: null (unsuccessful) else (successful)
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = 0;
	char *p = str;

	while (*p != '\0')
	{
		while (isspace(*p))
		{
			p++;
		}
		if (*p != '\0')
		{
			num_words++;

			while (*p != '\0' && !isspace(*p))
			{
				p++;
			}
		}
	}

	char **words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	p = str;
	int i = 0;

	while (*p != '\0')
	{
		while (isspace(*p))
		{
			p++;
		}
		if (*p != '\0')
		{
			char *start = p;

			while (*p != '\0' && !isspace(*p))
			{
				p++;
			}

			int len = p - start;
			char *word = malloc((len + 1) * sizeof(char));

			if (word == NULL)
			{
				int j = 0;

				while (j < i)
				{
					j++;
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(word, start, len);
			word[len] = '\0';
			words[i++] = word;
		}
	}
	words[i] = NULL;

	return (words);
}
