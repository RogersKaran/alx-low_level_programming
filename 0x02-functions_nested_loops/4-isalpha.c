#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabetic char or 0 for anything lese
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c <= 'A' && c <= 'Z'));
}
