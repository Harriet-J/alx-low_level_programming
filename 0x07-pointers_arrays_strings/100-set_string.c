#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char (string) to set *s to.
 */
void set_string(char **s, char *to)
{
    *s = to;
}

