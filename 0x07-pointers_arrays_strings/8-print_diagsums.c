#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix
 * @a: The square matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /* Sum of the first diagonal */
		sum2 += *(a + i * size + (size - 1 - i)); /* Sum of the second diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}

