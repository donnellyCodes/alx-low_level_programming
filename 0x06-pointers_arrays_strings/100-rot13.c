#include "main.h"
/**
 * rot13 - function to encode a string
 * @str: argument
 * Return: Always 0
 */
char *rot13(char *str)
{
	int i;

	int j;

	char rot[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0;j < 26; j++)
		{
			if (str[i] == rot[j])
			{
				str[i] = rot[j + 13];
				break;
			}
			else if (str[i] == rot[j] - 32)
			{
				str[i] = rot[j + 13] - 32;
				break;
			}
		}
	}
	return (str);
}
