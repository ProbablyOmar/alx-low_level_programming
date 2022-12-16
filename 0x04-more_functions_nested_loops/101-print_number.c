#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints number to the console
 *@n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar('0' + n % 10);
}

int main(void)
{
	print_number(0);

	return 0;
}
