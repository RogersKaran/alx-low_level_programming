#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _pow_recursion - Maths fxn calculating 'x' raised to the power 'y'.
 * @x: The integer to raise to power.
 * @y: The power to raise to.
 *
 * Return: -1 (error) and y > 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
