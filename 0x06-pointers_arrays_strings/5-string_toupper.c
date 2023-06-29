#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: argument used
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
