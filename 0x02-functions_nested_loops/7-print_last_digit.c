#include "main.h"

/**
 * print_last_digit - Prints the last digit of a num
 * @n: The number to be printed
 * @c: represents the number to check
 *
 * Return: Value of the last digit of number
 */

int print_last_digit(int c)
{
	int c = n % 10;

	if (c < 10)
		c = c * -1;
	_putchar(c + '0');
	return (c);
}
