#include "main.c"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabetic char or 0 for anything lese
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c = 'z') || (c <= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
