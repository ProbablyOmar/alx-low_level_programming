#include <stdio.h>

/**
 * main - Prints fibbonaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i = 2;
	unsigned long j = 1;
	unsigned long temp;
	unsigned long sum = 2;

	while (i < 4000000)
	{
		temp = i;
		i = j + i;
		j = temp;
		if (!(i % 2))
			sum += i;
	}
	printf("%lu\n", sum);
	return (0);
}
