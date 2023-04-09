#include "main.h"
/**
 * _strspn =- A function that prints lenght of the substring
 *
 * @s: Indicates the value
 *
 * @accept: Indicates the value
 *
 * Return: Indicates successful execution
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;

	int b;

	a = 0;

	while (*s)
	{
		for (b = 0 ; accept[b] ; b++)
		{
			if (*s == accept[a])
			{
				a++;

				break;
			}
			else if (accept[b + 1] == '\0')
			{
				return (a);
			}
			s++;
		}
		return (a);
	}
}




