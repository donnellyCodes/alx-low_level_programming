#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: integer argument
 * @av: double pointer
 * Return: null if integer or pointer is 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;

	char *str;

	int c;

	c = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	/* To count length of every character*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c++;
		}
	}
	c += ac;
	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
		return (NULL);
	/*To copy arguments into str*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
	}
	return (str);
}
