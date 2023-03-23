#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returms tha sum of all its parameters.
 * @n: Number of parameters passed to the function.
 * @...: Extra variable numbers to calculate in sum.
 *
 * Return: If n == 0 (fail)
 * Otherwise - sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
