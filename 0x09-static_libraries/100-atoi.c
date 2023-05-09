#include "main.h"
/**
 * _atoi - A function that converts str to integer
 *
 * @s: Indicates a string literal
 *
 * Return: Displays the integer
 */
int _atoi(char *s)
{
	int str1, str2;
	unsigned int str3;

	str1 = 1;
	str2 = 0;
	str3 = 0;

	while (!(s[str2] <= '9' && s[str2] >= '0') && s[str2] != '\0')
	{
		if (s[str2] == '-')
		{
			str1 *= -1;
		}
		str2++;
	}
	while (s[str2] <= '9' && (s[str2] >= '0' && s[str2] != '\0'))
	{
		str3 = (str3 * 10) + (s[str2] - '0');
		str2++;
	}
	str3 *= str1;
	return (str1);
}



