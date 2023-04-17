#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - A function that initializes a variable of type struct dog
 *
 * @d: Indicates the pointer of struct dog
 *
 * @name: Indicates the pointer nme of the dog
 *
 * @age: Indicates the age
 *
 * @owner: Indicates the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
