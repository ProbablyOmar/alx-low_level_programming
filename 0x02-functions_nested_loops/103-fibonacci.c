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
	int _;
	unsigned long temp;
	unsigned long sum = 0;

	printf("1, 2, ");
	for (_ = 0; _ < 48; _++)
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
