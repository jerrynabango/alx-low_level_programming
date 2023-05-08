#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: Indicates the name of the file to create
 *
 * @text_content: Indicates the file
 *
 * Return: Displays 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file1, file2, file3;

	file3 = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (file3 = 0; text_content[file3];)
		{
			file3++;
		}
	}

	file1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	file2 = write(file1, text_content, file3);

	if (file1 == -1 || file2 == -1)
	{
		return (-1);
	}

	close(file1);

	return (1);
}
