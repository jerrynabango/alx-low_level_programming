#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block
 *
 * @ptr: Indicates the pointer to the memory previously allocated
 *
 * @old_size: Indicates the size in bytes of allocated space
 *
 * @new_size: Indicates the new sizein bytes of the memory block
 *
 * Return: Displays the memory block reallocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int new, size;
	char *realloc, *alloc;

	if (ptr == NULL)
	{
		realloc = malloc(new_size);
		return (realloc);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	realloc = malloc(new_size);

	if (realloc == NULL)
	{
		return (NULL);
	}
	size = new_size;
	alloc = ptr;
	if (new_size > old_size)
	{
		size = old_size;
	}
	for (new = 0 ; new < size ; new++)
	{
		realloc[new] = alloc[new];
	}
	free(ptr);
	return (realloc);
}
