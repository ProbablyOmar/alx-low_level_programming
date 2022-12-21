#include "main.h"

/**
 * puts_half - Prints half of string
 * @str: Pointer to string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int count = 0;
	char *ptr = str;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	if (count % 2)
		ptr += (count - 1) / 2;
	else
		ptr += count / 2;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
