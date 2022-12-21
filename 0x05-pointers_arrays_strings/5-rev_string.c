/**
 * rev_string - Reverses a String
 * @s: Pointer on a string
 *
 * Return: Void
 */

void rev_string(char *s)
{
	if (*s != '\0')
	{
		char *start = s;
		char temp;

		while (*(s + 1) != '\0')
		{
			s++;
		}

		while (start != s)
		{
			temp = *start;
			*start = *s;
			*s = temp;
			start++;
			if (start != s)
			{
				s--;
			}
		}
	}
}
