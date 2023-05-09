#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cp_content - .....
 *
 * @argv: Indicates the arguments passe<F3>d<F4> to a program
 *
 * @file_to: Indicates where file is taken.
 *
 * @file_from: Indicates the destination where file was before.
 *
 * Return: Empty
 */
void cp_content(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read frtgom file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
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
	char buffer[1024];
	int file_from, file_to, file;
	ssize_t file1, file2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	cp_content(file_from, file_to, argv);

	file1 = 1024;
	while (file1 == 1024)
	{
		file1 = read(file_from, buffer, 1024);
		if (file1 == -1)
			cp_content(-1, 0, argv);
		file2 = write(file_to, buffer, file1);
		if (file2 == -1)
			cp_content(0, -1, argv);

	}

	file = close(file_from);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	file = close(file_to);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
