#include "dog.h"
#include <stddef.h>

/**
 * init_dog - prints a name as is
 * @name: name of the person
 * @age: age
 * @d: variable 1
 * @owner: variable 2
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
