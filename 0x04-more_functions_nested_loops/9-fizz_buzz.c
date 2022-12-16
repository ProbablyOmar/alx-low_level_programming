#include <stdio.h>

/**
 * main - Fizzbuzz game
 *
 * Return: Void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else if (!(i % 5))
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	return (0);
}
