/**
 * swap_int - Swaps values of two variables
 * @a: First variable
 * @b: Second variable
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
