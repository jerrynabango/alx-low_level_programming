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
	unsigned int sub1;

	int sub2;

	sub1 = 0;

	while (*s)
	{
		for (sub2 = 0 ; accept[sub2] ; sub2++)
		{
			if (*s == accept[sub2])
			{
				sub1++;

				break;
			}
			else if (accept[sub2 + 1] == '\0')
				return (sub1);
		}
			s++;
		}
		return (sub1);
}




