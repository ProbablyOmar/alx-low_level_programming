
/**
 * _strncat - Concatenates two strings together
 * @dest: Destintation pointer
 * @src: source char pointer
 * @n: Number of charcaters to be concatenated
 *
 * Return: Pointer to new string
 */

char *_strncat(char *dest, char *src, int n)
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
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
