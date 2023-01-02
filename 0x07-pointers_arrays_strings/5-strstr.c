/**
 * _strstr - searches for occurace of substring
 * @needle: substring
 * @haystack: String to be evauluated
 *
 * Return: Address of first occurance of substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack)
	{
		i = haystack;
		j = needle;
		while (*i == *j)
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
