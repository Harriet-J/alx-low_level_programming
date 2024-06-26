#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string to print the second half from
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

