#include <stdio.h>

/**
 * main -A program that prints the size of various types on the computer
 * Return: 0 (Successful)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
