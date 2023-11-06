#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * new dog - function for new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: char
 */

dog_t *new_dog(char *name, float age, char *owner);
{
	char *newName, *newOwner;
	dog_t *newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);

	newName = strdup(name);

	if (!newOwner)
	{
		free(newName);
		free(newDog);
		return (NULL);

	}
	newDog->name = newName;
	newDog->age = age
	newDog->owner = newOwner;

	return (newDog);
}
