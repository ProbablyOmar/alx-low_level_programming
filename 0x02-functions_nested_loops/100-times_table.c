#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: The times table print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int x;
	if (n < 15 && n > 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				x = i * j;

				if (j != 0)
				{
					putchar(',');
					if (x < 10)
						putchar(' ');
					if (x < 100)
						putchar(' ');
					putchar(' ');
				}

				printf("%d", x);
			}
			printf("\n");
		}
	}
}
