#include <stdio.h>
/**
 * main - prints fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int inc;

	unsigned long num1 = 0, num2 = 1, num3;

	for (inc = 0; inc < 50; inc++)
	{
		num3 = num1 + num2;
		printf("lu", num3);
		num1 = num2;
		num2 = num3;
		if (inc == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
