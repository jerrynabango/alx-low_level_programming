#include "main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: value
 *
 * @b: value
 *
 * Return: Empty
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
