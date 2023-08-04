#include "main.h"
#include <stdio.h>
/**
 * flip_bits - counts the number of bits needed
 * @n: The first number
 * @m: The last number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_i;
	unsigned int count = 0;

	xor_i = n ^ m;
	while (xor_i)
	{
		count += xor_i & 1;
		xor_i >>= 1;
	}
	return (count);
}
