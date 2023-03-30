#include <stdio.h>

void print_before_main(void)_attribute_((constructor));

/**
 * print_before_main - prints a message before the main function executes.
 */
void print_before_main(void)
{
	Printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
