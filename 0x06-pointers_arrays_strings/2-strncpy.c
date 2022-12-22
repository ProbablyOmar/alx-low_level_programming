
/**
 * _strncpy - Copies one string to another
 * @dest: Destintation pointer
 * @src: source char pointer
 * @n: Number of charcaters to be copied
 *
 * Return: Pointer to new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int m = 0;
	char *j = dest;

	while (*j != '\0')
	{
		m++;
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
