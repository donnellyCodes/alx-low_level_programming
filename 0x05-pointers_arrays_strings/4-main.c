#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c);
void print_rev(char *s);
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
