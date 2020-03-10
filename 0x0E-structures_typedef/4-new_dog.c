#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *store_name, *store_owner;
	dog_t *new_dog;

	store_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (store_name == NULL)
		return (NULL);
	store_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (store_owner == NULL)
	{
		free(store_name);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(store_name);
		free(store_owner);
		return (NULL);
	}
	_strcpy(store_name, name);
	_strcpy(store_owner, owner);
	new_dog->name = store_name;
	new_dog->owner = store_owner;
	new_dog->age = age;
	return (new_dog);
}
/**
 * _strlen - returns the length of a string.
 * @s: pointer parameter
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies string from a pointer to a array of chars.
 * @dest: Array destination
 * @src: string parameter
 * Return: cahr
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (*(src + i) == '\0')
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
