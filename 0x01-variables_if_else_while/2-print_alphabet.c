#include <stdio.h>

/**
 * main - Prints the lowercase alphabet
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
	return (0);
}
