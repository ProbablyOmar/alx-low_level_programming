#include <stdio.h>

/**
 * print_array - prints the first n elements of
 * an array
 * @a: ptr to array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && *a != ; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
}
