/**
 * _isupper - Checks to see if character is uppercase
 * @c: character to be evaluated
 *
 * Return: 1 if character is uppercase 0 if it's not
 */

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
        return (1);

    return 0;
}