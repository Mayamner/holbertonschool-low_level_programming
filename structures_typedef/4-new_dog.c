#include "dog.h"
#include <stdlib.h>

/**
 * _copystr - copies a string using malloc
 * @str: string to copy
 *
 * Return: pointer to new string or NULL
 */
char *_copystr(char *str)
{
	char *copy;
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _copystr(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _copystr(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
