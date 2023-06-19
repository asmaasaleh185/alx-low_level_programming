#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - gets lengrh of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcopy - returns copy of string
 * @s: string to be copied
 * @dest: copied string
 * Return: @dest
 */
char *_strcopy(char *dest, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		dest[i] = s[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog -creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: struct pointer  dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = -strcopy(dog->owner, owner);

	return (dog);
}
