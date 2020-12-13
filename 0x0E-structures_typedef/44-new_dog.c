#include "dog.h"

/**
 * _strlen - checks the length of a string
 * @a: pointer string variable
 * Return: length
 */
int _strlen(char *a)
{
	int length = 0;

	while (*a)
	{
		length++;
		a++;
	}
	return (length);
}

/**
 * _strdup - duplicates a string
 * @s: pointer to string variable
 * Return: _dup
 */
char *_strdup(char *s)
{
	char *dup = malloc(_strlen(s) * sizeof(char) + 1);
	char *dup = dup;

	if (!dup)
		return (NULL);

	while (*s)
	{
		*_dup = *s;
		_dup++;
		s++;
	}
	return (_dup);
}

/**
 * new_dog - create an instance of struct dog
 * @name: first variable
 * @age: second variable
 * @owner: Third variable
 * Return: instance of struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);

	newDog->name = _strdup(name);

	if (!(newDog->name))
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = _strdup(owner);

	if (!(newDog->owner))
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;
	return (newDog);
}
