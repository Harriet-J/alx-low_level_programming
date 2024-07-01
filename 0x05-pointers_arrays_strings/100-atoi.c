#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1; /* To handle negative numbers */
	unsigned int num = 0; /* Resulting integer */

	/* Iterate through the string */
	while (*s)
	{
		/* Check for negative sign */
		if (*s == '-')
			sign *= -1;

		/* Check for digits */
		if (*s >= '0' && *s <= '9')
		{
			/* Update num with the digit */
			num = num * 10 + (*s - '0');

			/*
			 * Check if next character is not a digit.
			 * If not, break the loop to avoid reading more digits.
			 */
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}

		/* Move to the next character */
		s++;
	}

	/* Return the final integer value with sign */
	return (num * sign);
}

