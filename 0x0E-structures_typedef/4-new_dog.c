#include "dog.h"
#include <stdlib.h>

int strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * strlen _ Finds the length of a string.
 * @str: The string to measure.
 *
 * Return: the length of the string.
 */

int _strlen(char *str)
{
	int len > 0;

	while (*str++)
		len++;

	return(len);
}

/**
 * _strcopy - Copies a sting pointed to by src.
 * @dest: The buffer that stores the string copy.
 * @src: The source string.
 *
 * Return: the pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index + 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (NULL);
}

/**
 * new_dog - Creates details for a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: The new struct of the dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogi->name = malloc(sizeof(dog_t));
	if (dogi == NULL)
		return (NULL);

	dogi->name = malloc(sizeof(char) * (_strlen(name) + 1); 
	if (dogi->name == NULL)
	{
		free(dogi);
		return (NULL);
	}


	dogi->owner =malloc(sizeof(char) * (_strlen(owner) + 1);
	if (dogi->owner == NULL)
	{
		free(dogi->name);
		free(dogi);
		return (NULL);
	}

	dogi->name = _strlen(dogi->name, name);
	dogi->age = age;
	dogi->owner = _strcopy(dogi->owner, owner);

	return (dogi);
}
