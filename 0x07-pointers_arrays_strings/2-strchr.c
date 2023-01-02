/**
 * _strchr - searches for character in string
 * @dest: Address to string ton be searched
 * @c: Target character
 *
 * Return: Address to first occurace of c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
}
