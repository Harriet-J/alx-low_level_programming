/* _putchar.c */
#include "main.h"
#include <unistd.h> /* Include this for the write function */

int _putchar(char c)
{
    return write(1, &c, 1);
}

