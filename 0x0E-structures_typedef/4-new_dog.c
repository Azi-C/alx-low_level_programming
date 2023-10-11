#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @c: input string
 * Return: the length of s
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - function that copies a string 
 * @dest: string copied
 * @src: string to copy
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);

	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
