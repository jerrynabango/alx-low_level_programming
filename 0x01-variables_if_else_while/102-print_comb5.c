#include <stdio.h>
/**
 * main - Start of the program
 *
 * || - Returns true if one or both conditions is true else prints false.
 *
 * putchar - returns the character written.
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	int a, b;

	for  (a = 0 ; a < 100 ; a++)
	{
		for (b = 0 ; b < 100 ; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
