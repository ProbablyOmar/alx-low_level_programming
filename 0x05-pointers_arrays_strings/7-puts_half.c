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
	int i;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	ptr += count / 2;
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
