#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array
 *
 * @nmemb: Indicates the array allocated memory
 *
 * @size: Indicates the bytes
 *
 * Return: Displays pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int alloc;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (alloc = 0 ; alloc < (nmemb * size); alloc++)
	{
		array[alloc] = 0;
	}
	return (array);
}
