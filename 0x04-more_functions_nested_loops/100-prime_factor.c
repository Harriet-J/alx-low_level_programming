#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long max_prime = -1;
	long i;

	/* Divide the number by 2 to remove all even factors */
	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	/* Iterate over odd numbers starting from 3 */
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number /= i;
		}
	}

	/* If the number is still greater than 2, then it is a prime number */
	if (number > 2)
	{
		max_prime = number;
	}

	printf("%ld\n", max_prime);
	return (0);
}

