#include "main.h"

/**
 * binary_to_uint - A function that converts binary n.o to unsigned int
 *
 * @b: Indicates a pointer to the constant
 *
 * Return: Displays the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int uint;

	num = 0;

	if (!b)
	{
		return (0);
	}

	for (uint = 0; b[uint] != '\0'; uint++)
	{
		if (b[uint] != '0' && b[uint] != '1')
		{
			return (0);
		}
	}

	for (uint = 0; b[uint] != '\0'; uint++)
	{
		num <<= 1;

		if (b[uint] == '1')
		{
			num += 1;
		}
	}

	return (num);
}
