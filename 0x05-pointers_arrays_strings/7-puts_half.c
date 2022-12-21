#include "main.h"

/**
 * puts-half - Prints half of string
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
	for (i = 0; i < count / 2 && *ptr != '\0'; i++)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}