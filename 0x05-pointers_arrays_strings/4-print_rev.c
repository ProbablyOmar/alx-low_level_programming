#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: Pointer to String
 *
 * Return: Void
 */

void print_rev(char *s)
{
	char *start = s;

	while (*(s + 1) != '\0' && *s != '\0')
	{
		s++;
	}

	while ((s + 1) != start && s != start)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
