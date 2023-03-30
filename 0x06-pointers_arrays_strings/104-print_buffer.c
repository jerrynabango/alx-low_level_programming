#include "main.h"
/**
 * print_buffer -  function that prints a buffer.
 *
 * @size: The buffer size
 *
 * @b: The printed buffer
 *
 * Return: Empty
 */
void print_buffer(char *b, int size)
{
	int a, b, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (a < size)
	{
		b = size - a < 10 ? size - a : 10;
		printf("%08x:", a);

		for (c = 0 ; c < 10 ; c++)
		{
			if (c < b)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0 ; c < b ; c++)
		{
			int d = *(b + a + c);

			if (e < 32 || e > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}
