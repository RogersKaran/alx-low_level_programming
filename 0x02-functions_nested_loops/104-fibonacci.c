#include <stdio.h>
#define ARRAY_SIZE 5000

/**
 * main - Prints the first 98 fibonacci numbers
 * 1 and 2, separated by a comma, followed by a space
 * Return: Always 0
 */

void add_arrays(int a[], int b[], int c[])
{
	int carry = 0;

	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		int sum = a[i] + b[i] + carry;

		c[i] = sum % 10;
		carry = sum / 10;
	}
}

void print_array(int a[])
{
	int i = 0;

	while (i < ARRAY_SIZE - 1 && a[i] == 0)
	{
		i++;
	}

	for (; i < ARRAY_SIZE; i++)
	{
		printf("%d", a[i]);
	}
	printf(", ");
}

void print_fibonacci_sequence(int n)
{
	int a[ARRAY_SIZE] = {0};
	int b[ARRAY_SIZE] = {0};
	int c[ARRAY_SIZE] = {0};

	a[ARRAY_SIZE - 1] = 1;
	b[ARRAY_SIZE - 1] = 2;
	printf("1, 2, ");

	for (int i = 3; i <= n; i++)
	{
		add_arrays(a, b, c);
		print_array(c);
		
		int *temp = a;

		a = b;
		b = c;
		c = temp;
	}
	printf("\n");
}

int main(void)
{
	print_fibonacci_sequence(98);
	return (0);
}
