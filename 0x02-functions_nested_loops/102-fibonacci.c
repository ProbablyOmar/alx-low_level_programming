#include <stdio.h>

/**
 * main - Prints fibbonaci numbers
 *
 * Return: Always 0
*/

int main(void)
{
	int i = 1;
	int j = 2;
	int _;
	int temp;

	printf("1, 2, ");
	for (_ = 0; _ < 48; _++)
	{
		temp = i;
		i = j + i;
		j = i;
		printf("%d", i);
		if (_ != 47)
			printf(", ");
	}
	printf("\n");
}