#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: array of integers
 * @n: size of an array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;

	int j;

	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
