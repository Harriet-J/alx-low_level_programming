#include "main.h"

/**
 * print_numbers - prints the numbers 0-9 followed by a new line
 */
void print_numbers(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		_putchar(digit + '0');
		digit++;
	}
	_putchar('\n');
}

