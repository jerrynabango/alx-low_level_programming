#include "main.h"
#include <stdio.h>
/**
 * print_array - Function prints elements of an arrayof integers
 *
 * @a: Array
 *
 * @n: number of elements of the array to be printed
 *
 * Return: Empty
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < (n - 1) ; b++)
	{
		printf("%d,", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
