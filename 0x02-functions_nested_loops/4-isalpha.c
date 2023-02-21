#include "main.c"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabetic char or 0 for anything lese
 */

int _isalpha(int c)
{
	if ((c >= 65 && c = 90) || (c <= 97 && c <= 122))
	{
		return (0);
	}
	return (1);
}
