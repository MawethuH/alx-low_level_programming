#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog name, age and owner.
 * @name: dog name.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * 
 * Desccription: describes dog attributes.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
