#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 */

void more_numbers(void)
{
	int tens;
	int units;
	int i;

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

int main(void)
{
	more_numbers();
	return 0;
}