#include "main.h"

/**
 * times_table - prints the n times table
 * @n: The times table print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int x;
	int tens;
	int units;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			x = i * j;
			tens = x / 10;
			units = x % 10;
			if (j != 0)
			{
				_putchar(',');
				if (x < 10)
					_putchar(' ');
				_putchar(' ');
			}

			if (tens)
				_putchar('0' + tens);
			_putchar('0' + units);
		}
		_putchar('\n');
	}
}
