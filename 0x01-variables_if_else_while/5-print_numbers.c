#include <stdio.h>
/**
 * main - Entry point
 * description - program that prints all single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
