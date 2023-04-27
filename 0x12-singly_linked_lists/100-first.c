#include <stdio.h>


/**
 * tale - A function that constructs a tale
 */
void tale(void) __attribute__((constructor));
/**
 * tale - A function that prints a tale
 */
void tale(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
