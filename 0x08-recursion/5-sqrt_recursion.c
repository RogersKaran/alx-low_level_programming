#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Recursive fxn calcualating the natural sqrt using bin
 * @n:Input that returns an int rep.ing the naural sqrt of 'n'.
 * @low:
 * @high:
 *
 * Return:  -1 (error)
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
	{
		int low = 0;
		int high = n;
		int mid = (low + high) / 2;
		int sqrt;

		if (mid * mid == n)
			sqrt = mid;
		else if (mid * mid < n)
			sqrt = _sqrt_recursion(mid + 1);
		else
			sqrt = _sqrt_recursion(mid - 1);
		return (sqrt);
	}
}
