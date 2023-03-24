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

	for (a = 3 ; a < 800000 ; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\b", b);
	return (0);
}

