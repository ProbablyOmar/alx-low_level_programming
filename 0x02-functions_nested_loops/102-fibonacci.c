#include <stdio.h>

/**
 * main - Prints fibbonaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int i = 2;
	unsigned int j = 1;
	int _;
	unsigned int temp;

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
