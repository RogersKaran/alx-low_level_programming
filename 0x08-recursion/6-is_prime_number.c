#include "main.h"
#include <math.h>

/**
 * is_prime_number - Fxn that checks whether an input integer is a prime.
 * @n: Input parameters.
 *
 * Return: 1 (prime number) & 0 (not prime number)
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	i = 5;

	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}

	return (1);
}
