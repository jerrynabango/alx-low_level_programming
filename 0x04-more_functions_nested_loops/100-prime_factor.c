#include <stdio.h>
#include "main.h"

/**
 * main - Displays the prime factors
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; a < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}

