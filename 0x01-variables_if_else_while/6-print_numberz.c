#include <stdio.h>

/**
 * main - Prints numbers from 0 - 9
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
