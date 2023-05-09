#include "main.h"

/**
 * get_bit - A function that returns value of a bit @ a given index
 *
 * @n: Indicates the integer
 *
 * @index: Indicates the integer index/position
 *
 * Return: Displays the value of the bit index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = 0;

	if (index > 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;

	return (value);
}
