#include "main.h"

/**
 * jack_bauer - prints all minutes of Jack Bauer's day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours;
	int minutes;
	int tens;
	int units;

	for (hours = 0; hours <= 23; hours++)
	{
		int hour_tens = hours % 100;
		int hour_units = hours % 10;

		for (minutes = 0; minutes <= 59; minutes++)
		{
			tens = minutes % 100;
			units = minutes % 10;

			_putchar('0' + hour_tens);
			_putchar('0' + hour_units);
			_putchar(':');
			_putchar('0' + tens);
			_putchar('0' + units);
			_putchar('\n');
		}
	}
}
