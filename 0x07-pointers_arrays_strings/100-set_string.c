#include "main.h"
/**
 * set_string - sets string
 * @s: Pointer to pointer
 * @to: Char pointer
 *
 * Description: sets the value of a pointer to a char
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
