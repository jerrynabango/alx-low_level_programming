#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: Indicates successful execution
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
			if (i != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}

