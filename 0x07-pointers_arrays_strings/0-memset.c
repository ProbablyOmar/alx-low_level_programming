/**
 * memset - Reserves an area in the memory
 * @s: Address to be reserved
 * @b: Constant to be filled by
 * @n: Number of bytes to reserve
 *
 * Return: Address to area reserved
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
}
