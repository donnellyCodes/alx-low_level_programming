#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number from which to extract the bit value
 * @index: index of the bit to be extracted (starting from 0)
 * Return: value of the bit at index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & mask)
		return (1);
	else
		return (0);
}
