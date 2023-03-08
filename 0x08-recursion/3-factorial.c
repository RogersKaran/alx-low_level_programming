#include "main.h"
#include <stdio.h>

/**
 * factorial - Math function calculating the factorial of a given int n
 * @n: Integer that is takes as input and returns it repr.ing its factorial
 *
 * Return: 1 (success) or -1 (error)
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
