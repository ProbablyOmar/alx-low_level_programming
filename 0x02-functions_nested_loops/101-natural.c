#include <stdio.h>

/**
 * main - Prints sum of multiples of 5 or 3
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
