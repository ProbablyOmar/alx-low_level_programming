#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 *
 * Return: Void
 */

void more_numbers(void)
{
	int tens;
	int units;
	int i;
	int _;

	for (_ = 0; _ < 10; _++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				tens = i / 10;
				_putchar('0' + tens);
			}
			units = i % 10;
			_putchar('0' + units);
		}
		_putchar('\n');
	}
}
