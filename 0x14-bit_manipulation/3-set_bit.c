#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to the unsigned long int
 * @index: the index of the bit to be set
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= i;
	return (1);
}
