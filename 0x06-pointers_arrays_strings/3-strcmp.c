/**
 * _strcmp - Copies one string to another
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int Positive if bigger
 * Negative if smaller
 * 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	if (s1[i] != '\0' || s2[j] != '\0')
		return (s1[i] - s2[j]);
	return (0);
}
