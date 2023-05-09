#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - A fucntion that creates a new dog
 *
 * @name: Indicate the dog's name
 *
 * @age: Indicates the dog's age
 *
 * @owner: Indicates the dog's owner
 *
 * Return: Displays the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	unsigned int dog1, dog2, dog3;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	poppy = malloc(sizeof(dog_t));

	if (poppy == NULL)
	{
		return (NULL);
	}
	for (dog1 = 0 ; name[dog1] ; dog1++)
		;
	dog1++;
	poppy->name = malloc(dog1 * sizeof(char));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}
	for (dog3 = 0 ; dog3 < dog1 ; dog3++)
		poppy->name[dog3] = name[dog3];
	poppy->age = age;

	for (dog2 = 0 ; owner[dog2] ; dog2++)
		;
	dog2++;
	poppy->owner = malloc(dog2 * sizeof(char));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}
	for (dog3 = 0 ; dog3 < dog2 ; dog3++)
		poppy->owner[dog3] = owner[dog3];
	return (poppy);
}
