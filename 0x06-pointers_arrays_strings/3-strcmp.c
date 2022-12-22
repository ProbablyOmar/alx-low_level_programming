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
	int sum1 = 0;
	int sum2 = 0;
	int i;

	while (i = 0; s1[i] != '\0'; i++)
		sum2 += s1[i];

	while (i = 0; s1[i] != '\0'; i++)
		sum2 += s2[i];
	return (sum1 - sum2);
}
