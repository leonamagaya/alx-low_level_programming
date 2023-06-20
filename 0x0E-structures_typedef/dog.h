#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - record for a dog.
 * @name: the name of the dog.
 * @age: the age og the dog.
 * @owner: the owner of the dog.
 *
 * Description: the structure contains all
 *              data about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
