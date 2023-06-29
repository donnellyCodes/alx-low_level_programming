#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - function that capitalized string
 * @str: argument
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (i == 0 || isspace(str[i - 1]) || str[i - 1] == ',' || str[i - 1] == ';'
			|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			str[i - 1] == '{' || str[i - 1] == '}')
			str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
