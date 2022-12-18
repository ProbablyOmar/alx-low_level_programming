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

	printf("1, 2, ");
	for (_ = 0; _ < 48; _++)
	{
		temp = i;
		i = j + i;
		j = temp;
		if (!(i % 2))
			printf("%lu", i);
		if (_ != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
