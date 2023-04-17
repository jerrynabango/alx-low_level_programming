#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Indicates details about the dog
 *
 * @name: Indicates the dog's name
 *
 * @age: Indicates the dog's age
 *
 * @owner: Indcates the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

