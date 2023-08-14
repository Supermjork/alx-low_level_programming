#include "dog.h"
#include<stdlib.h>

/**
 * init_dog - create doggo in fn
 *
 * @hobbes: dog obj
 * @name: name
 * @age: age doggo
 * @owner: owner of doggo
 *
 * Return: dog, null if false
 */

void init_dog(struct dog *hobbes, char *name, float age, char *owner)
{
	if (hobbes == NULL)
		return;

	hobbes->name = name;
	hobbes->age = age;
	hobbes->owner = owner;
}

