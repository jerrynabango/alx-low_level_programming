#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: Displays the endianness
 */
int get_endianness(void)
{
	char *end;
	int check;

	end = (char *)&check;
	check = 1;

	return (*end);
}
