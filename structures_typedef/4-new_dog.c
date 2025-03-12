#include "dog.h"

/**
* new_dog - Creates a new dog_t structure.
* @name: Dog's name.
* @age: Dog's age.
* @owner: Owner's name.
*
* Return: Pointer to the new structure, or NULL on failure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, name_len = 0, owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;

	while (owner[owner_len])
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->owner = malloc(owner_len + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}

