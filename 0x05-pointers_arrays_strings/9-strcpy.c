/**
 * _strcpy - Copies string into buffer
 * @dest: Destination buffer
 * @src: sources string
 *
 * Return: ptr to destination
*/

char *_strcpy(char *dest, char *src)
{
	char *address = dest;

	while (*(src - 1) != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (address);
}