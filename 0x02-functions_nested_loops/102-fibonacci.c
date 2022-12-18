#include <stdio.h>

/**
 * main - Prints fibbonaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 2;
	int j = 1;
	int _;
	int temp;

	printf("1, 2, ");
	for (_ = 0; _ < 48; _++)
	{
		temp = i;
		i = j + i;
		j = temp;
		printf("%u", i);
		if (_ != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
