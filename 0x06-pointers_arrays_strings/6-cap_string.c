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
		if (i == 0 && s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
			continue;
		}
		if (!(s[i] > 96 && s[i] < 123) || !(s[i] > 64 && s[i] < 91))
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] -= 32;
				i++;
			}
		}
		i++;
	}
	return (s);
}
