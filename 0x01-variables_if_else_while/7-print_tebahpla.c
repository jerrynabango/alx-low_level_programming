#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: Indicates successsful execution of the program
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
