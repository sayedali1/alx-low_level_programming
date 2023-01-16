#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* _strlen - get the len of the string
* @s: the string
* Return: the len
*/
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}

/**
*_strcpy - copy the sec str in the first one
*@dest: the copied str
*@src: the str we want to copy
*Return: char the address of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
/**
*new_dog - fun that create a new dog
*@name:pointer to the name of the dog
*@age: dog age
*@owner: pointer to the name of the owner
*Return: pointer to the created struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_dog;
	char *name_cp;
	char *owner_cp;

	New_dog = malloc(sizeof(dog_t));/* allocate memory of size dog_t */
	if (New_dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		/* alloc memory of size name and cpy name into name_cp */
		name_cp = malloc(sizeof(char) * _strlen(name) + 1);
		if (name_cp == NULL)
		{
			free(New_dog);
			return (NULL);
		}
		New_dog->name = _strcpy(name_cp, name);
	}
	else
		New_dog->name = NULL;

	if (owner != NULL)
	{
		/* alloc memory of size owner and cpy owner into owner_cp */
		owner_cp = malloc(sizeof(char) * _strlen(owner) + 1);
		if (owner_cp == NULL)
		{
			free(name_cp);
			free(New_dog);
			return (NULL);
		}
		New_dog->owner = _strcpy(owner_cp, owner);
	}
	else
		New_dog->owner = NULL;

	New_dog->age = age;

	return (New_dog);
}
