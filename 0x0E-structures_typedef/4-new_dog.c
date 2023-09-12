#include "dog.h"
#include <stdio.h>

/**
* _strlen - function that measure the string lenght
*@str: pointer to a string.
*
* Return: integer for the length.
*/

int _strlen(char *str)
{
	int size = 0;

	while (str[size])
	{
		size++;
	}
	return (size);
}

/**
* _strcopy - a function that copies a string.
* @dest: pointer to the destination string.
* @src: pointer to the source string.
*
* Return: pointer to an string1
*/

char *_strcopy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] ; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: dog's name
* @age: dog's age
* @owner: owner's name
*
* Return: void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
