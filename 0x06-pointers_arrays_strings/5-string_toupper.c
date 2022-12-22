/**
 * string_toupper - turn a string into uppercase
 * @s: ptr to string
 *
 * Return: char ptr to new string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
		i++;
	}
	return (s);
}
