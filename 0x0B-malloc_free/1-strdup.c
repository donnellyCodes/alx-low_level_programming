#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function returns a pointer to a new string
 * @str: argument
 * Return: null if str is null else returns a pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = malloc((strlen(str) + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str); /*copy content to input string when successful*/
	return (duplicate);
}
