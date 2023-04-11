#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function returns pointer to allocated memory space
 *
 * @str: Indicates the string
 *
 * Return: Displays the pointer allocated
 */
char *_strdup(char *str)
{
	char *pointer;
	int mem_space1, mem_space2;

	mem_space2 = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[mem_space2] != '\0')
	{
		mem_space2++;
	}
	pointer = (char *)malloc((sizeof(char) * mem_space2) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (mem_space1 = 0 ; mem_space1 < mem_space2 ; mem_space1++)
	{
		pointer[mem_space1] = str[mem_space1];
	}
	pointer[mem_space2] = '\0';

	return (pointer);
}


