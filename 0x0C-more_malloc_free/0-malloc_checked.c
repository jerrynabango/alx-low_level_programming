#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 *
 * @b: Indicates the memory allocated
 *
 * Return: Displays the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	int *allocate;

	allocate = malloc(b);

	if (allocate == NULL)
	{
		exit(98);
	}
	return (allocate);
}
