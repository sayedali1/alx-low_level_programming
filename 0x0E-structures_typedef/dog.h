#ifndef DOG_H
#define DOG_H

/**
*struct dog - struct that dog and its owner
*@name: name of the dog
*@age: age of the dog
*@owner: name of the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
