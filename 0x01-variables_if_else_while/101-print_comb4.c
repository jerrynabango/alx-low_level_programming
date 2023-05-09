#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: Indicates successful execution
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 1 ; b < 10 ; b++)
		{
			for (c = 2 ; c < 10 ; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a + b + c != 24)
					{

					putchar(',');
					putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}


