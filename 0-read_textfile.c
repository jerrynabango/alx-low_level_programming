#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - A function that reads a text file & prints it to the stdout
 *
 * @filename: Indicates pointer to the constant
 *
 * @letters: Indicates the number of letters it should read and print
 *
 * Return: Displays the actual n.o of leters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fhandle;
	ssize_t file1, file2, file3;

	if (filename == NULL)
	{
		return (0);
	}
	fhandle = malloc(sizeof(char) * letters);

	if (fhandle == NULL)
	{
		return (0);
	}
	file1 = open(filename, O_RDONLY);

	file2 = read(file1, fhandle, letters);

	file3 = write(STDOUT_FILENO, fhandle, file2);

	if (file1 == -1 || file2 == -1 || file3 == -1 || file3 != file2)
	{
		free(fhandle);

		return (0);
	}

	free(fhandle);

	close(file1);

	return (file3);
}
