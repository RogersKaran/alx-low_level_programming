#include "main.h"

/**
 * main - checks for uppercase characters
 * Return: 0 (success) and 1 (failed)
 */

int _isalpha(int c)
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