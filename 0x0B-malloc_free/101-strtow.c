#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - function that splits a string into words
 * @str: argument
 * Return: Always 0
 */
char **strtow(char *str)
{
	if (str == NULL || strlen(str) == 0)
		return (NULL);
	int i, j, k, len = strlen(str);

	int word_count = 0, word_len = 0;

	char **words;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			word_len++;
		else if (i > 0 && str[i - 1] != ' ')
			word_count++;
	}
	if (str[len - 1] != ' ')
		word_count++;
	if (word_count == 0)
		return (NULL);
	words = (char **) malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	j = 0, k = 0, word_len = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			word_len++;
		if (word_len == 1)
			j = i;
	}
	else if (i > 0 && str[i - 1] != ' ')
	{
		words[k] = (char *) malloc((word_len + 1) * sizeof(char));
	if (words[k] == NULL)
	{
		while (k > 0)
		{
			k--;
			free(words[k]);
		}
		free(words);
		return (NULL);
	}
	strncpy(words[k], &str[j], word_len);
	words[k][word_len] = '\0';
	k++;
	}
	words[k] = NULL;
	return (words);
}
