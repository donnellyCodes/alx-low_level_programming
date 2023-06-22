#include <stdio.h>

/**
 * main - program finds and prints largest prime number
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;

	int inc;

	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}
		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}
	}
	printf("%ld\n", number);
	return (0);
}
