#include "main.h"

/**
 * _abs - Computing the absolute value of an integer
 * @num: The integer to be be completed
 *
 * Return: Absolute value or zero
 * Return2: Less than 0 num
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
