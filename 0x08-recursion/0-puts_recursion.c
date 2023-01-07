#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 * @s: Character Pointer
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(++s);
}
