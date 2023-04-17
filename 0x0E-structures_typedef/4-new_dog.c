#include "dog.h"

/**
  * new_dog - function that creates a new dog
  * @name: name of new dog
  * @age: age of new dog
  * @owner: owner of the new dog
  * Return: pointer to the created dog, NULL otherwise
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *a_dog;

	a_dog = malloc(sizeof(struct dog));
	if (a_dog == NULL)
		return (NULL);
	a_dog->name = name;
	a_dog->age = age;
	a_dog->owner = owner;

	return (a_dog);
}
