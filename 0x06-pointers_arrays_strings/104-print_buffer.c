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
	int a, e, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (a < size)
	{
		e = size - a < 10 ? size - a : 10;
		printf("%08x : ", a);
		for (c = 0 ; c < 10 ; c++)
		{
			if (c < e)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < e; c++)
		{
			int d = *(b + a + c);

			if (d < 32 || c > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}

