#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - 0-positive_or_negative.c
 * description - This program will assign a random number to the variable n
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("%d\n");
	if (n > 0)
		{
		printf("Positive\n");
	}
	else
	{
		printf("Negative\n");
	}

	return (0);
}
