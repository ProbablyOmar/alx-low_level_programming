#include "main.h"

/**
 * _puts - Prints a string
 * @str: ptr to string to be printed
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}