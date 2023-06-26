#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every character
 * @str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
