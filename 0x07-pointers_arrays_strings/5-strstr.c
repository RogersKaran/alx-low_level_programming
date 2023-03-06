#include "main.h"
#include <string.h>

/**
 * _strstr - A function that finds the firtst occurene of substring in string
 * @needle: Characters of the haystac with the needle sting.
 * @haystack: for empty needle.
 *
 * Return: whether the needle is present or not.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;
		p3 = haystack;

		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return (p3);
		}
		haystack++;
	}
	return (NULL);
}
