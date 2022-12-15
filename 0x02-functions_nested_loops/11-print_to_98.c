#include <stdio.h>

/**
 * print_to_98 - Prints numbers from given number to 98
 * @n: number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--
		}
	}
	else
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++
		}
	}
	printf("98");
}
