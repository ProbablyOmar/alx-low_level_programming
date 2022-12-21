#include "main.h"

/**
 * puts2 - Prints every other character
 * @str: Pointer on a string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int flag = 0;

	while (*str != '\0')
	{
		if (!(flag % 2))
			_putchar(*str);
		str++;
	}
	_putcahr('\n');
}