/**
 * _memcpy - copies area in the memory
 * @dest: Address to be copied to
 * @src: Source of bytes
 * @n: Number of bytes to copy
 *
 * Return: Address to new area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;

	while (n--)
	{
		*x = *src;
		x++;
		src++;
	}
	return (dest);
}
