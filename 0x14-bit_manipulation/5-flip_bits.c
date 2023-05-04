#include "main.h"

/**
 * flip_bits - A function that returns n.o of bits you need to flip
 *
 * @n: Indicates the intger
 *
 * @m: Indicates the integer
 *
 * Return: Displays the n.o of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;

	flip = 0;
	
	for (flip = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			flip++;
		}
	}

	return (flip);
}
