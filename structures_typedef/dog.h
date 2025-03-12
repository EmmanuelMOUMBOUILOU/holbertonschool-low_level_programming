#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - Structure representing a dog.
* @name: Dog's name (string).
* @age: Dog's age (number, comma).
* @owner: Owner's name (string).
*/
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* New type dog_t */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

