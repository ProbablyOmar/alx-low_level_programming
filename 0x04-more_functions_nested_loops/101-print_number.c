#include "main.h"

/**
 * print_number - Prints number to the console
 *@n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n)
	{
		int x = n % 10;

		n /= 10;
		print_number(n);
		if (x < 0)
		{
			x = -x;
			if (!n)
				_putchar('-');
		}
		_putchar('0' + x);
	}
}
