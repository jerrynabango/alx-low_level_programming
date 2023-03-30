#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer.
 *
 * @b: Printed buffer
 *
 * @size: Buffer size
 *
 * Return: Empty
 */
void print_buffer(char *b, int size)
{

	int a, e, u;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		e = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (u = 0; u < 10; u++)
		{
			if (u < e)
				printf("%02x", *(b + a + u));
			else
				printf("  ");
			if (u % 2)
			{
				printf(" ");
			}
		}
		for (u = 0; u < e; u++)
		{
			int d = *(b + a + u);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}

