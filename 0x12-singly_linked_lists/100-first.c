#include <stdio.h>
void beforMain(void) __attribute__ ((constructor));
/**
 * beforMain - Function  prints a sentence before the main function is executed
 */
void beforMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

