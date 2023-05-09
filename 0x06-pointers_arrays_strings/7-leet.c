#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 *
 * @c: Encoded string
 *
 * Return: Encoded output
 */
char *leet(char *c)
{
	int a, b;
	char ch[] = "aAeEoOtTlL";
	char ar[] = "4433007711";

	for (a = 0 ; *(c + a); a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			if (ch[b] == c[a])
				c[a] = ar[b];
		}
	}
	return (c);
}
