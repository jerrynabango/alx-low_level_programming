#include "main.h"
/**
 * print_diagsums - A function that prints sum of two diagonals
 *
 * @a: Indicates value to be printed
 *
 * @size: Indicates the value printed size
 *
 * Return: Empty
 */
void print_diagsums(int *a, int size)
{
	int b, c, d;

	b = 0;
	c = 0;

	for (d = 0; d < size; d++)
	{
		b = b + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
		c += a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", b, c);
}
