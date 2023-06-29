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

	char alpha[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] =
		"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
