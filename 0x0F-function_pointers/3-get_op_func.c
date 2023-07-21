#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects appropriate function
 * @s: operator passed as an argument
 * Return: A pointer to the function corresponding with operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (0);
}
