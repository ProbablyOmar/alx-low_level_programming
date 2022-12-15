/**
 * _islower - determines if character is lowercase or not
 *
 * *args letter letter to be evaluated
 * Return: True of lowercase letter false otherwise
 */
int  _islower(int c)
{
	if (c < 123 && c > 96)
		return true;
	return false;
}
