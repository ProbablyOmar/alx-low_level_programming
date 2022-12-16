#include "main.h"

/**
 * print_diagonal - Prints a diagonal in the console
 * @n: Length of the diagonal
 * 
 * Return: void
*/

void print_diagonal(int n)
{
	int columns;
	int rows;

	if (n > 0)
	{
		for (rows = 0; rows < n; rows++)
		{
			for (columns = 0; columns < rows; columns++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
