#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Fxn that concatenates all args of prog & returns *concatenated.
 * @ac: The number of arguments.
 * @av: An array of pointers to  the arguments.
 *
 * Return: null (unsuccessful) else (successful).
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int len = 0;

	int i = 0;

	while (i < ac)
	{
		i++;
		len += strlen(av[i]) + 1;
	}

	char *result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	int pos = 0;

	int i = 0;

	while (i < ac)
	{
		i++;
		int arglen = strlen(av[i]);

		memcpy(result + pos, av[i], arglen);
		pos += arglen;
		result[pos++] = '\n';
	}

	result[pos] = '\0';

	return (result);
}
