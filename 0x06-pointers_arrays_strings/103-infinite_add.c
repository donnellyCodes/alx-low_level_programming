#include "main.h"
#include <string.h>
/**
 * infinite_add - function to add two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: Always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_1 = strlen(n1);

	int len_2 = strlen(n2);

	int carry = 0;

	int sum = 0;

	int i = len_1 - 1, j = len_2 - 1, k = size_r - 1;

	r[k] = '\0'; /*sets NULL terminator for result string*/
		while (i >= 0 || j >= 0)
		{
			if (i >= 0 && j >= 0)
			{
				sum = n1[i] - '0' + n2[j] - '0' + carry;
				i--;
				j--;
			}
			else if (i >= 0)
			{
				sum = n1[i] - '0' + carry;
				i--;
			}
			else
			{
				sum = n2[j] - '0' + carry;
				j--;
			}
			if (sum > 9)
			{
				carry = 1;
				sum -= 10;
			}
			else
			{
				carry = 0;
			}
			if (k <= 0) /*checks if there is enough space in r*/
			{
				return (NULL);
			}
			r[k - 1] = sum + '0';
			k--;
		}
		if (carry > 0)
		{
			if (k <= 0)
				return (NULL);
			r[k - 1] = carry + '0';
			k--;
		}
		if (k < 0)
			return (NULL);
	return (r);
}
