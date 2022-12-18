#include <stdio.h>

/**
 * main - Prints fibbonaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long long i = 2;
	long long j = 1;
	int _;
	long long temp;

	printf("1, 2, ");
	for (_ = 0; _ < 48; _++)
	{
		temp = i;
		i = j + i;
		j = temp;
		printf("%d", i);
		if (_ != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
