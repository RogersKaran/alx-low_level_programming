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
	int last_digit = num % 10;

	printf("The last digit is %d\n", last_digit);
	return (last_digit);
}
