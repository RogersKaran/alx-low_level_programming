#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a num
 * @num: The variable to be printed
 *
 * Return: Value of the last digit of number
 */

int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;

	a = num % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
