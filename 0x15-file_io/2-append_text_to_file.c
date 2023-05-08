#include "main.h"

/**
 * append_text_to_file - A function that appends a text at the end of a file
 *
 * @filename: Indicates the name of the file
 *
 * @text_content: Indicates the pointer to the character
 *
 * Return: Displays 1 if file exists else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file1, file2, file3;

	if (!filename)
	{
		return (-1);
	}

	file1 = open(filename, O_WRONLY | O_APPEND);

	if (file1 == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (file2 = 0; text_content[file2]; file2++)
			;

		file3 = write(file1, text_content, file2);

		if (file3 == -1)
		{
			return (-1);
		}
	}

	close(file1);

	return (1);
}
