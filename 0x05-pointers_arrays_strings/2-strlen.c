#include "main.h"
/**
 * _strlen - Function that returns length of string
 *
 * @s : Identifies the string
 *
 * Return: Indicates the string length count
 */
int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0'; a++)
	{
		count++;
	}
	return (count);
}
