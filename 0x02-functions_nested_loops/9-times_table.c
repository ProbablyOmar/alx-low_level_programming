#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int x;
	int tens;
	int units;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
