/**
 * _strspn - Compares prefixes
 * @accept: Wanted prefix
 * @s: String to be evauluated
 *
 * Return: Number of common prefix bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int number_of_bytes = 0;

	while (*s == *accept)
	{
		number_of_bytes++;
		s++;
		accept++;
	}
	return (number_of_bytes);
}
