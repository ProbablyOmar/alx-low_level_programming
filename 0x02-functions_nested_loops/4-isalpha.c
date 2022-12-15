/**
 * _isalpha - Checks if charcacter is alphabetic character
 *
 * @c: character to be checked
 *
 * Return: True if alphabetic false if otherwise
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	return (0);
}
