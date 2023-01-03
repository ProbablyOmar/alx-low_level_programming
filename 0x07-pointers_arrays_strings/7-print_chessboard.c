#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: Chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int empty_row_flag = 1;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (!empty_row_flag)
				_putchar(a[i][j]);
			if (a[i][j] != ' ' && empty_row_flag)
			{
				empty_row_flag = 0;
				j = 0;
			}
		}
		_putchar('\n');
	}
}
