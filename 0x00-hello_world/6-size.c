#include <stdio.h>

/**
 * main -A program that prints the size of various types on the computer
 * Return: 0 (Successful)
 */

int main(void)
{
	printf("char: %ld byte(s)\n", sizeof(char));
	printf("short: %ld byte(s)\n", sizeof(short));
	printf("int: %ld byte(s)\n", sizeof(int));
	printf("long: %ld byte(s)\n", sizeof(long));
	printf("long long: %ld byte(s)\n", sizeof(long long));
	printf("float: %ld byte(s)\n", sizeof(float));
	printf("double: %ld byte(s)\n", sizeof(double));
	printf("long double: %ld byte(s)\n", sizeof(long double));

	return (0);
}
