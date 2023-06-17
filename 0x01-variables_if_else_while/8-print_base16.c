#include <stdio.h>
/**
 * main - Entry point
 * description - a program that prints all the numbers of base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char y;

	int d;

	y = 'a';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(y <= 'f') {
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
