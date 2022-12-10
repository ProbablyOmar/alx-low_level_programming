#include <stdio.h>

/**
 * main - Prints all possible digits
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(44);
	}
	putchar(57);
	putchar(10);
	return (0);
}
