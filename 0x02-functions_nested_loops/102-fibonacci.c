#include <stdio.h>
/**
 * main - print the first 100 Fibonacci numbers.
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	int a;
	long int b1, b2, c;

	b1 = 1;
	b2 = 2;
	printf("%ld,%ld", b1, b2);

	for (a = 0 ; a < 48 ; a++)
	{
		c = b1 + b2;
		printf(", %ld", c);
		b1 = b2;
		b2 = c;
	}
	printf("\n");
	return (0);
}

