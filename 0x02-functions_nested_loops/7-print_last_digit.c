#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: number of which we print the last digit
 *
 * Return: the last digit of the number n
 */
int print_last_digit(int n)
{
	int x = n % 10;

	_putchar('0' + x);
	return (x);
}
