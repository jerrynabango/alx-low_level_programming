#include <stdio.h>
/**
 * main -  computes sum of all the multiples
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	int j, z;

	for (j = 1 ; j < 1024 ; j++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
			z += j;
	}
	printf("%d\n", z);
	return (0);
}
