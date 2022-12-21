/**
 * _strlen - Finds the length of string
 * @s: Pointer to string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
