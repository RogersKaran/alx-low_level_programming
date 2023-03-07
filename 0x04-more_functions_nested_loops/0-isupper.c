#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *@c: The characters to check
 * Return: 0 (success) and 1 (failed)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
