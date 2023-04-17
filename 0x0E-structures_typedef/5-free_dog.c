#include "dog.h"

/**
  * free_dog - frees memory occupied by dog
  * @d: struct to free memory
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
