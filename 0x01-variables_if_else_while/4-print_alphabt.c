#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - return alphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet, letter_E, letter_Q;

       letter_E = 'e';
       letter_Q = 'q';
       for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != letter_E && alphabet != letter_	Q)		{
			putchar(alphabet);
		}
	putchar('\n');
	return (0);
}
