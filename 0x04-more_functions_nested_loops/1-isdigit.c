/**
 * _isdigit - Checks to see if character is a digit
 * @c: Character to be evaluated
 * 
 * Return: 1 if character is digit 0 otherwise
*/

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
