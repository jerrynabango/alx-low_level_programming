#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates arguments
 *
 * @ac: Indicates the array size of av
 *
 * @av: Indicates the array size of ac
 *
 * Return: Displays the concatenated args
 */
char *argstostr(int ac, char **av)
{
	int arg1, arg2, arg3 = 0, arg4 = 0;

	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg1 = 0 ; arg1 < ac ; arg1++)
	{
		for (arg2 = 0 ; av[arg1][arg2] ; arg2++)
		{
			arg4++;
		}
	}
	arg4 += ac;

	str = malloc(sizeof(char) * arg4 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (arg1 = 0 ; arg1 < ac ; arg1++)
	{
		for (arg2 = 0 ; av[arg1][arg2] ; arg2++)
		{
			str[arg3] = av[arg1][arg2];

			arg3++;
		}
		if (str[arg3] == '\0')
		{
			str[arg3++] = '\n';
		}
	}
	return (str);
}
