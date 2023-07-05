#include "main.h"
#include <string.h>
int actual_palindrome(char *s, int start, int end);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: actual string
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);
	return (actual_palindrome(s, 0, length - 1));
}
/**
 * actual_palindrome - checks if string is palindrome recursively
 * @s: actual string
 * @start: start of string
 * @end: end of string
 * Return: 1 if string is palindrome, 0 if not
 */
int actual_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (actual_palindrome(s, start + 1, end - 1));
}
