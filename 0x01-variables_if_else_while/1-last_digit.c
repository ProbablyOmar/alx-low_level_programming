#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints the range of the last digit in a random number
 *
 * Return: 0 if successful
 */

int main(void)
{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is zero\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, n % 10);
	return (0);
}
