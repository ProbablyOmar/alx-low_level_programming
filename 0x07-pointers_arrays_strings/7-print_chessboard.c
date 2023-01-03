#include "main.h"
#include <stdio.h>

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
				putchar(a[i][j]);
			if ((a[i][j] != ' ' && a[i][j] != '\0') && empty_row_flag)
			{
				empty_row_flag = 0;
				j = 0;
			}
		}
		putchar('\n');
	}
}

int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};
	print_chessboard(board);
	return (0);
}