#include "main.h"
#include <stdio.h>
/**
 * print_binary - funtion that prints the binary representation of a number
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag = 0;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
