#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Strart point of the program
 *
 * Return: Indicates successful execution of the program
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is  zero\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
		printf("\n");
	}
	return (0);
}
