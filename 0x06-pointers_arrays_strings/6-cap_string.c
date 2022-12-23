/**
 * cap_string - Capatalize all words of a string
 * @s: ptr to string
 *
 * Return: char ptr to new string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123 && (i = 0 || !((s[i - 1] > 96 && s[i - 1] < 123) && (s[i - 1] > 64 && s[i - 1] < 91))))
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
