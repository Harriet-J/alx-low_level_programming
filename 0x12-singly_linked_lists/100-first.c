#include <stdio.h>

/**
 * before_main - prints a message before the main function is executed
 */
__attribute__((constructor))
void before_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

