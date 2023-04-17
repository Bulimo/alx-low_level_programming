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

	a_dog = malloc(sizeof(struct dog));
	if (a_dog == NULL)
		return (NULL);

	if (name == NULL)
		a_dog->name = NULL;
	else
	{
		a_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (a_dog->name == NULL)
		{
			free(a_dog);
			return (NULL);
		}
		_strcpy(a_dog->name, name);
	}

	if (owner == NULL)
		a_dog->owner = NULL;
	else
	{
		a_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (a_dog->owner == NULL)
		{
			free(a_dog);
			return (NULL);
		}
		_strcpy(a_dog->owner, owner);
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

