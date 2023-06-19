#include "main.h"
/**
 * _strstr - A function that locates a substring
 *
 * @haystack: Indicates the string
 *
 * @needle: Indicates the first occurence of the substring
 *
 * Return: Displays the pointer to the beginning of the located substring
 *
 * Return(NULL): Displays null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
	char *a, *b;

	a = haystack;
	b = needle;

	while (*a == *b && *b != '\0')
	{
		a++, b++;
	}
	if (*b == '\0')
		return (haystack);
	}
	return (NULL);
}
