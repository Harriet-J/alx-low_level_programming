#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare and initialize num as integer */
	int num;

	/* Loop through single digit numbers from 0 to 9 */
	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0'); /* Print each digit as character */
	}
	putchar('\n'); /* Print newline after printing all digits */

	return (0); /* Return 0 to indicate successful completion */
}

