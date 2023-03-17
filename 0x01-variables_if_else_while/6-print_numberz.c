#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: Indicates successful execution of the program
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
