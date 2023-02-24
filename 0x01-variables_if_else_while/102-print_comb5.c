#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possble combination of three digits
 *
 * Return: return 0 (success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = 'o'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones)
			{
				if(!((ones == tens) || (tens > ones || (hundreds > tens)))/*eliminates repetition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if(!(ones == '9' && hundreds == '7' && tens == '8'))/*adds commas and spaces*/
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}	
