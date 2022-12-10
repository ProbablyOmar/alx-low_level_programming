#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar(10);
	return (0);
}
