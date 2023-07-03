#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: contains bytes
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	unsigned int j;

	unsigned int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (count);
		i++;
	}
	return (count);
}
