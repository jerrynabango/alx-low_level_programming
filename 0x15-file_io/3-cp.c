#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cp_content - .....
 *
 * @argv: Indicates the arguments passe<F3>d<F4> to a program
 *
 * @to: Indicates where file is taken.
 *
 * @from: Indicates the destination where file was before.
 */
void cp_content(int to, int from, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read frtgom file %s\n", argv[1]);
		exit(98);
	}

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - A program that copies the content of a file to another file
 *
 * @argc: Indicates the number of args on the command line
 *
 * @argv: Indicates the name of program being executed
 *
 * Return: Indicates the content copied
 */
int main(int argc, char *argv[])
{
	ssize_t file1, file2;
	char buffer[1024];
	int file, to, from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	cp_content(from, to, argv);

	file1 = 1024;
	while (file1 == 1024)
	{
		file1 = read(from, buffer, 1024);
		if (file1 == -1)
			cp_content(-1, 0, argv);
		file2 = write(to, buffer, file1);
		if (file2 == -1)
			cp_content(0, -1, argv);

	}

	file = close(from);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	file = close(to);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
