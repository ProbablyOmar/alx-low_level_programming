#include "main.h"

/**
 * print_triangle - Prints a triangle to the terminal
 * @size: Size of the triangle
 *
 * Return: Void
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k <= i; k++ )
			_putchar('#');
	}
}
