#include <stdio.h>
#include "main.h"

/**
 * main - Indicates the maim function
 *
 * Return: Indciates successful execution
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
	printf("Little Endian\n");
	}
	else
	{
	printf("Big Endian\n");
	}
	return (0);
}
