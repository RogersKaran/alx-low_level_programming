#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * print_error - Prints the error
 * @98: exit.
 */

void print_error() {
    printf("Error\n");
    exit(98);
}

/**
 * is_valid_numbers - Checks the validity of a number.
 * @isdigit: confirms.
 *
 * Return: 0 (unsuccessful) & 1 (successful)
 */

int is_valid_number(char *number)
{
	for (int i = 0; i < strlen(number); i++)
	{
		if (!isdigit(number[i]))
			return (0);
	}
	return (1);
}

/**
 * multiply - Multiplies to strings.
 * @num1: Numeral
 * @num2: Num
 *
 * Return: v
 */

void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
		print_error();

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;
			int pos1 = i + j;
			int pos2 = i + j + 1;
			int sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	int i = 0;

	while (i < len1 + len2 && result[i] == 0)
	{
		i++;
	}

	if (i == len1 + len2)
		printf("0\n");
	else
	{
		while (i < len1 + len2)
		{
			printf("%d", result[i]);
			i++;
		}
		printf("\n");
	}

	free(result);
}

/**main - Initialize.
 *
 * Return: f
 */

int main(int argc, char **argv)
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])
		print_error();
	multiply(argv[1], argv[2]);
	return (0);
}
