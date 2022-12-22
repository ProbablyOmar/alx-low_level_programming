
/**
 * _strcat - Concatenates two strings together
 * @dest: Destintation pointer
 * @src: source char pointer
 *
 * Return: Pointer to new string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;
	char *j = dest;

	while (*j != '\0')
	{
		n++;
		j++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
}
