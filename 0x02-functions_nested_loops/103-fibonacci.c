#include <stdio.h>

/**
 * main - Prints the sume of even fibonacci numbers
 * less than 4000000
 * Return: nothing!
 */

int main(void)
{
	int sum = 0;
	int fib1 = 1, fib2 = 2;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		int temp = fib2;

		fib2 = fib1 + fib2;
		fib1 = temp;
	}
	printf("%d\n", sum);
	return (0);
}
