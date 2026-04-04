#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *new_name;
	char *new_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(dog);
		free(new_name);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
