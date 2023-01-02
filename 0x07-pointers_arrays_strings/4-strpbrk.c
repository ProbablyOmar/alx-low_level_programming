/**
 * _strpbrk - searches for occurace of element of set
 * @accept: set of characters
 * @s: String to be evauluated
 *
 * Return: Address of first occurace of set element
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s)
	{
		i = accept;
		while (*i)
		{
			if (*s == *i)
				return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}
