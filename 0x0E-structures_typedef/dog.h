#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

/**
  * struct dog - describes a dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
  * dog_t - typedef for dog
  */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
