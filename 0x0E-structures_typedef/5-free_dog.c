#include <stdlib.h>
#include "dog.h"
/**
*free_dog - fun that free dogs
*@d: pointer of type dog_t
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
