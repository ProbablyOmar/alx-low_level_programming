#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int _;
	char i;

	for (_ = 0; _ < 10; _++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
