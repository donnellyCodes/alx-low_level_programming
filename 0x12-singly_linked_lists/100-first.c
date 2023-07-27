#include <stdio.h>
/**
 * pre_main_message - prints message before main
 */
void pre_main_message(void) __attribute__((constructor));

void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
