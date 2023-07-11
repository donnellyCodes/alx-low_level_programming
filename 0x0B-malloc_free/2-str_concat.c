#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL)
		s1 = ""; /*indicates empty string*/
	if (s2 == NULL)
		s2 = "";
	concat = malloc(strlen(s1) + strlen(s2) + 1);
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1); /*copies contents of s1*/
	strcat(concat, s2); /*concatenates contents of s2*/
	return (concat);
}
