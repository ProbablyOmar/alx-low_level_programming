/**
 * _strlen_recursion- Returns length of string
 * @s: Character Pointer
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return 0;
	}
}
