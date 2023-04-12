#include "main.h"
#include <stdlib.h>
/**
 * count_word - A function that prints number of words 
 *
 * @s: Indicates a string
 *
 * Return: Displays the number of words
 */
int count_word(char *s)
{
	int word1, word2, flag;

	word2 = 0;
	flag = 0;

	for (word1 = 0 ; s[word1] != '\0' ; word1++)
	{
		if (s[word1] == ' ')
			flag = 0;
		else
			if (flag == 0)
			{
				flag = 1;

				word2++;
			}
	}
	return (word2);
}

/**
 * strtow - A function that splits a string into words
 *
 * @str: Indicates the splitted string
 *
 * Return: Displays the splitted words
 */
char **strtow(char *str)
{
	int wrd1, wrd2, wrd3, wrd4, wrd5, wrd6, wrd7;
	char **strn1, *strn2;

	wrd2 = 0;
	wrd3 = 0;
	wrd5 = 0;

	while (*(str + wrd3))
		wrd3++;
	wrd4 = count_word(str);

	if (wrd4 == 0)
		return (NULL);

	strn1 = (char **)malloc(sizeof(char *) * (wrd4 + 1));

	if (strn1 == NULL)
		return (NULL);

	for (wrd1 = 0; wrd1 <= wrd3; wrd1++)
	{
		if (str[wrd1] == ' ' || str[wrd1] == '\0')
		{
			if (wrd5)
			{
				wrd6 = wrd1;

				strn2 = (char *)malloc(sizeof(char) * (wrd5 + 1));

				if (strn2 == NULL)
				{
					return (NULL);
				}
				while (wrd6 < wrd7)
				{
					*strn2++ = str[wrd6++];
				}
				*strn2 = '\0';
				strn1[wrd2] = strn2 - wrd5;

				wrd2++;

				wrd5 = 0;
			}
		}
		else if (wrd5++ == 0)
		{
			wrd6 = wrd1;
		}
	}
	strn1[wrd2] = NULL;

	return (strn1);
}
