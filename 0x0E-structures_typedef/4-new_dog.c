#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog -  a function that creates a new dog.
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: the ne dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *terry;

	terry = malloc(sizeof(dog_t));

	if (terry == NULL)
	{
		return (NULL);
	}

	terry->name = name;
	terry->age = age;
	terry->owner = owner;
	return (terry);
}
