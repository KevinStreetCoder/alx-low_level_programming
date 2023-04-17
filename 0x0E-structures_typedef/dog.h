#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a struct representing a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


/* function that initializes a dog struct */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* function that prints a struct dog */
void print_dog(struct dog *d);

#endif /* DOG_H */
