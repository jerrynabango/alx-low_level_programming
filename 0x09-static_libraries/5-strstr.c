#include "main.h"
/**
 * _strstr - A function returns ptr to the beginning of str1 & str2
 *
 * @haystack: Indicates the value
 *
 * @needle: Indicates the value
 *
 * Return: Indicates a successful execution
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *strn1 = haystack;
		char *strn2 = needle;

		while (*strn1 == *strn2 && *strn2 != '\0')
		{
			strn1++;
			strn2++;
		}
		if (*strn2 == '\0')
			return (haystack);
	}
		return (0);
}
