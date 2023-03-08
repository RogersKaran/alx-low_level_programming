#include "main.h"

/**
 * is_prime_number - Fxn that checks whether an input integer is a prime.
 * @n: Input parameters.
 *
 * Return: 1 (success)
 */

int is_prime_number(int n)
{
	if (n >= 1)
		return (1);
	else if (n <= 0)
		return (0);
	else
		return (n * is_prime_number, (i + 1));
}
