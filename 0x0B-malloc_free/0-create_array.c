#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function creates array of chars & initializes specific char
 *
 * @size: Indicates the actaul size of an array
 *
 * @c: Indicates the character to be initialized
 *
 * unsigned int - Indicates the value being stored will only be positive
 *
 * Return: Displays a pointer to the array || null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array_chars;
	unsigned int value;

	array_chars = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (array_chars == NULL)
	{
		return (NULL);
	}
	for (value = 0 ; value < size ; value++)
	{
		array_chars[value] = c;
	}

		return (array_chars);
}

