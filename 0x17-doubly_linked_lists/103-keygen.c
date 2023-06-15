#include <string.h>
#include <stdio.h>

/**
 * main - A function for the crackme5 keygen function
 *
 * @argc: Indicates the number of arguments to the function to be called
 *
 * @argv: Indicates the arguments to the function
 *
 * Return: Displays successful execution of the function
 */
int main(int argc, char *argv[])
{
	unsigned int crackme, crack;
	size_t key, gen;
	char *user = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char segfault[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	key = strlen(argv[1]);
	segfault[0] = user[(key ^ 59) & 63];
	for (crackme = 0, gen = 0; crackme < key; crackme++)
		gen += argv[1][crackme];
	segfault[1] = user[(gen ^ 79) & 63];
	for (crackme = 0, crack = 1; crackme < key; crackme++)
	{
		crack *= argv[1][crackme];
	}
	segfault[2] = user[(crack ^ 85) & 63];
	for (crack = argv[1][0], crackme = 0; crackme < key; crackme++)
	{
		if ((char)crack <= argv[1][crackme])
		{
			crack = argv[1][crackme];
		}
	}
	srand(crack ^ 14);
	segfault[3] = user[rand() & 63];
	for (crack = 0, crackme = 0; crackme < key; crackme++)
	{
		crack += argv[1][crackme] * argv[1][crackme];
	}
	segfault[4] = user[(crack ^ 239) & 63];
	for (crack = 0, crackme = 0; (char)crackme < argv[1][0]; crackme++)
		crack = rand();
	segfault[5] = user[(crack ^ 229) & 63];
	printf("%s\n", segfault);
	return (0);
}
