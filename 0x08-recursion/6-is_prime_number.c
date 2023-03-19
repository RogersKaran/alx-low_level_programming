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

	i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}

	return (1);
}
