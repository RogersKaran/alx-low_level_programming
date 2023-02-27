#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *srand - seeds a random number genearator
 *Return: Always 0 (success)
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i, r;
	
	srand(time(NULL));
	
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		r = rand() % 62;
		
		if (r < 26)
		{
			password[i] = 'A' + r;
		}
		else if (r < 52)
		{
			password[i] = 'a' + (r - 26);
		}
		else
		{
			password[i] = '0' + (r - 52);
		}
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}

