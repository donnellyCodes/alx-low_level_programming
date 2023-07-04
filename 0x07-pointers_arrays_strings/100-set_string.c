#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: Char pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
