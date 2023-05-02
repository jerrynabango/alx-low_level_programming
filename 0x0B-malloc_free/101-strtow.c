#include <stdlib.h>
#include "main.h"

/**
 * strtow - A function that splits a string into words
 *
 * @s: Indicates a string
 *
 * Return: Displays a pointer to an array of strings
 */
char **strtow(char *s)
{
	char **string;
	int split, split1, split2;

	if (s == NULL || s[0] == '\0' || (s[0] == ' ' && s[1] == '\0'))
		return (NULL);

	split = split1 = split2 = 0;

	while (s[split])
	{
		if (split2 == 0 && s[split] != ' ')
			split2 = split;

		if (split > 0 && s[split] == ' ' && s[split - 1] != ' ')
		{
			split1 = 0;
			split2++;
		}
		split++;
	}
	split2 += split1 == 1 ?  1 : 0;
	if (split2 == 0)
		return (NULL);

	string = (char **)malloc(sizeof(char *) * (split2 + 1));
	if (string == NULL)
		return (NULL);

	words(string, s);
	string[split2] = NULL;
	return (string);

}
/**
 * words - A function that prints arrray with words
 *
 * @c: Indicates the string
 *
 * @s: Indicates the string
 */
void words(char **c, char *s)
{
	int word1, word2, word3, word4;

	word1 = word2 = word3 = 0;

	while (s[word1])
	{
		if (word3 == 0 && s[word1] != ' ')
		{
			word4 = word1;
			word3 = 1;
		}
		if (word1 > 0 && s[word1] == ' ' && s[word1 - 1] != ' ')
		{
			word(c, s, word4, word1, word2);
			word3 = 0;
			word2++;
		}
		word1++;
	}
	if (word4 == 1)
	{
		word(c, s, word3, word1, word2);
	}
}
/**
 * word - A fucntion that creates a word
 *
 * @c: Indicates the string
 *
 * @s: Indicates the string
 *
 * @split1: Indicates the start position of the word
 *
 * @split2: Indicates the end position of the word
 *
 * @split3: Indicates the index
 */
void word(char **c, char *s, int split1, int split2, int split3)
{
	int wrd1, wrd2;

	wrd1 = split2 - split1;
	c[split3] = (char *)malloc(sizeof(char) * (wrd1 + 1));
	for (wrd2 = 0 ; split1 < split2; split1++, wrd2++)
		c[split3][wrd2] = s[split1];

	c[split3][wrd2] = '\0';
}

