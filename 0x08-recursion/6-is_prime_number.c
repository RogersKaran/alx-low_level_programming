#include "main.h"

/**
 * is_prime_number - Fxn that checks whether an input integer is a prime.
 * @n: Input parameters.
 *
 * Return: 1 (success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Checks if 'i' is equal to 'n'.
 * @i: Int to check.
 * @n: Number of times to check
 *
 * Return: 0 or
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
