#include "main.h"

/**
 * print_chessboard - takes 2D array of chars reping a chessboard and prints it
 * @a: Represents the chess board.
 */

#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
