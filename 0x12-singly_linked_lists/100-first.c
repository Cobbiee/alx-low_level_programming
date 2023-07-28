#include <stdio.h>

/**
 * premain - prints amessage before the main function
 * This function uses the constructor attribute to run before main
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore mt house upon my back!\n");
}
