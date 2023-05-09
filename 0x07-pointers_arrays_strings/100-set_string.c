#include "main.h"
/**
 * set_string - A function that sets the value of a pointer to a char
 *
 * @to: Indicates a memory address
 *
 * @s: Indicates string with memory adress
 *
 * Return: Empty
 */
void set_string(char **s, char *to)
{
	*s = to;
}

