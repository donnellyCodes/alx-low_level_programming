#include <stdio.h>
/**
 * main - 6-size.c
 * description - Write a C program that prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
