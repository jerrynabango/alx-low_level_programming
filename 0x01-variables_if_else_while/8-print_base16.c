#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: Indicates execution of the program
 */

int main(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + 'o');
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
