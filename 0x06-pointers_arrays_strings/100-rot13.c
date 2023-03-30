#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 *
 * @c: String encoded
 *
 * Return: Displays encoded string
 */
char *rot13(char *c)
{
	int input, output;
	char list1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char list2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (input = 0 ; *(c + input); input++)
	{
		for (output = 0 ; output < 52 ; output++)
		{
			if (list1[output] == *(c + input))
			{
				*(c + input) = list2[output];
				break;
			}
		}
	}
	return (c);
}

