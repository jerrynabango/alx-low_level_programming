#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - A fucntion that prints struct dog
 *
 * @d: Indciates the string of struct dog
 *
 * Return: Empty
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
