#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords for the program
 *
 * Return: Indicates successful executioin
 */
int main(void)
{
	int a, b, sum;
	int password[20];
	sum = 0;
	srand(time(NULL));

	for (a = 0 ; a < 20; a++)
	{
		password[a] = rand() % 10;
		sum += (password[a] + '0');
		putchar(password[a] + '0');
		if (2772 - sum - '0' < 10)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
