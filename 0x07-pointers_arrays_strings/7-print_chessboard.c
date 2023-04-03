#include "main.h"

/**
 *print_chessboard -  prints a chessboard.
 *@a: pointer to first element of an array
 *
 *Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			k = *(a[i] + j);
			_putchar(k);
		}
		_putchar('\n');
	}
}
