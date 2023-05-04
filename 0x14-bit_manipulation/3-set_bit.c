#include "main.h"

/**
 * set_bit - A function that sets value of bit t0 1 @ given index
 *
 * @n: Indicates the pointer to the unsigned int
 *
 * @index: Indicates the integer
 *
 * Return: Displays 1 if it worked or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 63)
	{
		return (-1);
	}

	value = 1 << index; 
	*n = *n | value;

	return (1);
}
