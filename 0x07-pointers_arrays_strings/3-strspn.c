#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search
 * @accept: substring of accepted characters
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	/* Initialize count for length of accepted segment */
	unsigned int count = 0;
	int i, j;
	int found;

	/* Iterate through string s */
	for (i = 0; s[i]; i++)
	{
		found = 0;
		/* Iterate through accept array */
		for (j = 0; accept[j]; j++)
		{
			/* If character in s matches accept */
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		/* If character in s doesn't match accept, break loop */
		if (found == 0)
			break;
	}
	return (count);
}

