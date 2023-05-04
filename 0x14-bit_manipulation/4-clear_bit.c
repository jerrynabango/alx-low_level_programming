#include "main.h"

/**
 * clear_bit - A function that sets value of bit to 0
 *
 * @n: Indicates the pointer to ther int
 *
 * @index: Indciates the integer index
 *
 * Return: Displays 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 63)
	{
		return (-1);
	}

	value = ~(1 << index);
	*n = *n & value;

	return (1);
}
