#include <stdio.h>
/**
 * main - Prints 100 Fibonnaci numbers
 *
 * Returns: Indicates successful execution
 */

int main(void)
{
	int c, boolean, boolean2;
	long int num1, num2, fn, fn2, num11, num22;

	num1 = 1;
	num2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fn = num1 + num2;
			printf(", %ld", fn);
			num1 = num2;
			num2 = fn;
		}
		else
		{
			if (boolean2)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			fn2 = (num11 + num22);
			fn = num1 + num2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = fn;
			num22 = (fn2 % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}

