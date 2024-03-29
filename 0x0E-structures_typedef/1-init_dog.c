#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a struct dog as defined in the header file
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (!d)
	{
		return;
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
