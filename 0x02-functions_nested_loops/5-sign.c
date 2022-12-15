#include "main.h"
/**
 * print_sign - Prints sign of intger
 * @n: integer to be evaluated
 *
 * Return: 0 if zero - 1 if postive - -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
       	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
