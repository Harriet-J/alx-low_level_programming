#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z'; /* Start with 'z', the last letter of the alphabet */

	while (letter >= 'a') /* Loop from 'z' to 'a' */
	{
		putchar(letter); /* Print the current letter */
		letter--; /* Move to the previous letter in the alphabet */
	}

	putchar('\n'); /* Print a newline at the end */

	return (0); /* Return 0 to indicate successful completion */
}

