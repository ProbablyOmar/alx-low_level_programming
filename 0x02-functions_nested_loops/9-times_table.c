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
			tens = x % 100;
			units = x % 10;
			_putchar('0' + tens);
			_putchar('0' + units);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('$');
			}
		}
		_putchar('\n');
	}
}
