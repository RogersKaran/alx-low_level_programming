nclude "main.c"

/**
 * print_sign - Prints the sign of a a number
 * @n: The number to be checked
 * Return: 0 for positive num, 1 for negative num
 */

int print_sigh(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(41);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
