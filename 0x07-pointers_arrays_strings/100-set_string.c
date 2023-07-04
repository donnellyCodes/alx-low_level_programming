#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: A pointer to a pointer
 * @to: A value to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
