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
	dog_t *a_dog;
	char *name_copy = NULL;
	char *owner_copy = NULL;

	a_dog = malloc(sizeof(struct dog));
	if (a_dog == NULL)
		return (NULL);

	if (name == NULL)
		a_dog->name = NULL;
	else
	{
		name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
		if (name_copy == NULL)
		{
			free(a_dog);
			return (NULL);
		}
		a_dog->name = _strcpy(name_copy, name);
	}

	if (owner == NULL)
		a_dog->owner = NULL;
	else
	{
		owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (owner_copy == NULL)
		{
			free(a_dog->name);
			free(a_dog);
			return (NULL);
		}
		a_dog->owner = _strcpy(owner_copy, owner);
	}
	a_dog->age = age;

	return (a_dog);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */
int _strlen(char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */

	if (s != NULL)
	{
		while (*(s + i++))
			len++;
	}
	return (len);
}

/**
  * _strcpy - copies the string src to dest
  * @src: source string to be copied
  * @dest: where to copy src
  * Return: void
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;			/* loop counter */

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

