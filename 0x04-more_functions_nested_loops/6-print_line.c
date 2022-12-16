#include "main.h"

/**
 * print_line - Prints a line in the terminal
 * @n: length of line to be printed
 *
 * Return: Void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
