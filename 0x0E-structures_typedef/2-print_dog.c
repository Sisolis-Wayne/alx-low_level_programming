#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: a struct dog as defined in the header file
 *
 * Return: the struct of the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	if (!d->age)
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", d->owner);
}
