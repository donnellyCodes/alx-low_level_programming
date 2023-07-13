#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: argument
 * Return: pointer, Null if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;

	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	new_str = malloc(sizeof(char) * (i + n + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
