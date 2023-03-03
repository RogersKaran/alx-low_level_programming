#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _islower - Display the alphabet letters in uppercase
 *@c: The character to check
 * Return: 0 (Run successful).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
