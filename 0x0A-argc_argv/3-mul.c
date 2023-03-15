#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplicatin f two args numbers.
 * @argc: Argument count
 * @argv: Argument vector.
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int result = n1 * n2;

		printf("%d\n", result);
	}
	else
	{
		printf("Eror\n");
		return (1);
	}

	return (0);
}
