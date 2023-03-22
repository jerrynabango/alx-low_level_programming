#include <stdio.h>
/**
 * main - Prints the first 100 Fibonnaci numbers
 *
 * Returns: Indicates successful execution
 */

int main(void)
{
		unsigned long int i;
		unsigned long int u = 1;
		unsigned long int a = 2;
		unsigned long int l = 1000000000;
		unsigned long int u1;
		unsigned long int u2;
		unsigned long int a1;
		unsigned long int a2;


		printf("%lu", u);


		for (i = 1; i < 91; i++)
		{
			printf(", %lu", a);
			a += u;
			u = a - u;
		}


		u = (u / l);
		u2 = (u % l);
		a1 = (a / l);
		a2 = (a % l);


		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", a1 + (a2 / l));
			printf("%lu", a2 % l);
			a1 = a1 + u1;
			u1 = a1 - u1;
			a2 = a2 + u2;
			u2 = a2 - u2;
		}
		printf("\n");
		return (0);
}



