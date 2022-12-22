/**
 * _strcmp - Copies one string to another
 * @dest: Destintation pointer
 * @src: source char pointer
 *
 * Return: int Positive if bigger
 * Negative if smaller
 * 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\n' && s2[j] != '\n')
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
	}
	return (0);
}
