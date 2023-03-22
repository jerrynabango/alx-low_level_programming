#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	long int j1, j2, a, b;

	j1 = 1;
	j2 = 2;
	a = b = 0;

	while (a <= 4000000)
	{
		a = j1 + j2;
		j1 = j2;

		if ((j1 % 2) == 0)
		{
			b += j1;
		}
	}
	printf("%ld\n", b);
	return (0);
}

