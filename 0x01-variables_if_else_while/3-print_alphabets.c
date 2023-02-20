#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Display the alphabet letters in uppercase
 *
 * Return: 0 (Run successful).
 * 
 */

int main(void)
{
	char alphaB;
	
	for (alphaB = 'a'; alphaB <= 'z'; alphaB++)
		putchar(alphaB);
	for (alphaB = 'A'; alphaB <= 'Z'; alphaB++)
		putchar(alphaB);
	putchar('\n');
	return (0);
}
