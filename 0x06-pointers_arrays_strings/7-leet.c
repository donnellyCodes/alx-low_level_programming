#include "main.h"
/**
 * leet - function to encode a string
 * @str: argument
 * Return: Always 0
 */
char *leet(char *str)
{
	int i;

	int j;

	char leet[] = {'4', '3', '0', '7', '1'};
	char letter[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letter[j] || str[i] == letter[j] - 32)
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
