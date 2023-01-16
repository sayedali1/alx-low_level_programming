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
*new_dog - fun that create a new dog
*@name:pointer to the name of the dog
*@age: dog age
*@owner: pointer to the name of the owner
*Retuen: pointer to the created struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_dog;
	char *name_cp, *owner_cp;
	int i;

	New_dog = malloc(sizeof(dog_t));

	if (New_dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_cp = malloc(sizeof(char) * (_strlen(name) + 1));
		if (name_cp == NULL)
		{
			free(name_cp);
			return (NULL);
		}
		
		for (i = 0; name[i] != '\0'; i++)
		{
			name_cp[i] = name[i];
		}
		name_cp[i] ='\0';
	}
	New_dog->name = name_cp;

	if (owner != NULL)
	{
		owner_cp = malloc(sizeof(char) * (_strlen(owner) + 1));

		if (owner_cp == NULL)
		{
			free(owner_cp);
			free(New_dog);
			return (NULL);
		}

		for (i = 0; owner[i] != '\0'; i++)
		{
			owner_cp[i] = owner[i];
		}
		owner_cp[i] ='\0';
	}
	New_dog->name = owner_cp;

	
	New_dog->age = age;
	
	return (New_dog);
}
