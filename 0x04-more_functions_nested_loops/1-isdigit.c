#include "main.h"

/**
 * main - check for a digit
 *
 * Return: 1 (success) or 0 (success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
