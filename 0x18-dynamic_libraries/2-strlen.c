#include "main.h"
/**
 * _strlen - A function that prints string length
 *
 * @s: Indicates a string pointer
 *
 * Return: Dispalys the string length
 */
int _strlen(char *s)
{
	int str_lenght;

	str_lenght = 0;

	while (*s != '\0')
	{
		str_lenght++;
		s++;
	}
	return (str_lenght);
}
