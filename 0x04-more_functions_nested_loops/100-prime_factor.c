#include <stdio.h>
#include "main.h"

/**
 * main - Displays the prime factors
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	unsigned long int a, b = 612852475143;

	for (i = 3; a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\n", b);
	return (0);
}

