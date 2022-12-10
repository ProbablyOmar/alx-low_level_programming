#include <stdio.h>

/**
 * main - prints the alphabet except e and q
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}

	putchar(10);
	return (0);
}
