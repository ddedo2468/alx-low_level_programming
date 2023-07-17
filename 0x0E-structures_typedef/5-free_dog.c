#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - make my dog a free dog
 * @d: pointer to my dog structure
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
