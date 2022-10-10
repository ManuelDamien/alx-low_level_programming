#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - memory space allocated for a dog struct
 * @d: struct the dof to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
