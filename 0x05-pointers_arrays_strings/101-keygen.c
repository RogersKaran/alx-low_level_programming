#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 *srand - seeds a random number genearator
 *Return: Always 0 (success)
 */

int main(void)
{
	char password[PASSWORD_LENGTH];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	password[PASSWORD_LENGTH - 1] = '\0';

	printf("%s\n", password);
	return (0);
}
