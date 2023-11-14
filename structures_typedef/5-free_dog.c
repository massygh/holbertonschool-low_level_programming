#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - prints a name as is
 * @d: variable
 *
 */

void free_dog(dog_t *d)

{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
