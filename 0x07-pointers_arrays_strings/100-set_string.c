#include "main.h"
/**
 * set_string - sets string
 * @s: inut string
 * @to: character directions
 *
 * Description: sets the value of a pointer to a char
 * Return: always 0
 */
void set_string(char **s, char *to)
{

        *s = to; /*copies the value of s to to*/
