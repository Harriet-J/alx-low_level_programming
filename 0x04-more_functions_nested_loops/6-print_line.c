#include "main.h"

/**
 * print_line - prints a line of '_' characters followed by a newline
 * @n: number of times the character '_' should be printed
 *
 * If n is 0 or less, prints only a newline.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}

