#include "main.h"

/**
 * is_prime_number - Fxn that checks whether an input integer is a prime.
 * @n: Input parameters.
 *
 * Return: 1 (success)
 */

#include <math.h>

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (is_prime_number_helper(n, 3));
}

/**
 * is_prime_number_helper - Helps
 * @n: The number of times
 * @i:
 *
 * Return: 1 (success) or 0 (fail)
 */

int is_prime_number_helper(int n, int i)
{
	if (i > sqrt(n))
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_number_helper(n, i + 2));
}
