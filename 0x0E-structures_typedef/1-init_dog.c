#include "dog.h"
/**
*init_dog - fun that init a varible of type dog
*@d: pointer to struct dog
*@name: pointer to the first element of char
*@age: float to the age of the dog
*@owner: pointer to the first element of the owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		return (1);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
