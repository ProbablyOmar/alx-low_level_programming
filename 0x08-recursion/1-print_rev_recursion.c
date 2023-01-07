#include "main.h"

/**
 * recursion - Prints a string in reverse recursively
 * @s: Character Pointer
 *
 * Return: Void
 */

void recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		recursion(++s);
		_putchar(*s);
	}
}

/**
 * _puts_rev_recursion - Prints a string in reverse recursively
 * @s: Character Pointer
 *
 * Return: Void
 */
void _puts_rev_recursion(char *s)
{
	recursion(s);
	_putchar('\n');
}
