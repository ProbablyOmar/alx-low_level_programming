#include "main.h"

/**
 * _puts_rev_recursion - Prints a string in reverse recursively
 * @s: Character Pointer
 *
 * Return: Void
 */

void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_rev_recursion(++s);
		_putchar(*s);
	}
}
