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
	int b, c, d, e, f;

	for (b = 0 ; b < size ; b++)
	{
		d = (b * size) + b;
		e += *(a + d);
	}
	for (c = 0 ; c < size ; c++)
	{
		d = (c * size) + (size - 1 - c);
		f += *(a + d);
	}
	printf("%d, %d\n", e, f);
}
