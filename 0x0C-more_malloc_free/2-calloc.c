#include "main.h"
#include <stdlib.h>
#include <string.h>  /* Include string.h for memset function */

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Use memset to zero-initialize the allocated memory */
	memset(ptr, 0, total_size);

	return (ptr);
}

