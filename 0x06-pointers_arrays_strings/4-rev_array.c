/**
 * reverse_array - Reverse an array
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
