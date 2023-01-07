#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: Character Pointer
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
