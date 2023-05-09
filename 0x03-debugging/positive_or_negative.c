#include "main.h"
/**
 * positive_or_negative - Identifies + and - numbers
 *
 * @a: The value to be identified
 *
 * Return: Indicates successful execution
 */
void positive_or_negative(int a)
{
	if (a < 0)
		printf("%d is negative", a);
	else
		printf("%d is positive", a);
}

