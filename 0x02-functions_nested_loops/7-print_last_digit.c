#include "main.c"

/**
 * print_last_digit - Prints the last digit of a num
 * @n: The number to be printed
 * Return: Value of the last digit of number
 */

int print_last_digit(int c)
{
	int last;

	last = n % 10;
	if (last < 10)
	{
		last =last * -1;
	}
	_putchar(last = '0');
	return (last);
}
