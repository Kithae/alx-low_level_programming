#include <stdlib.h>
	#include "dog.h"

	/**
	 * _strlen – a function that returns the string length
	 * @s: the string in question
	 *
	 * Return: the length
	 */
	int _strlen(char *s)
	{
		int a;

		a = 0;

		while (s[a] != '\0')
		{
			a++;
		}

		return (a);
	}

	/**
	 * *_strcpy – a function that copies a pointed string
	 * @dest: a pointer to the location buffer
	 * @src: the string in question
	 *
	 * Return: a pointer to dest
	 */
	char *_strcpy(char *dest, char *src)
	{
		int length, a;

		length = 0;

		while (src[length] != '\0')
		{
			length++;
		}

		for (a = 0; a < length; a++)
		{
			dest[a] = src[a];
		}
		dest[a] = '\0';

		return (dest);
	}

	/**
	 * new_dog – a function that creates a new dog
	* @name: a character pointer to a string
 * @age: float data type
 * @owner: a character pointer to a string
	 *
	 * Return: a pointer to the new dog else, NULL
	 */
	dog_t *new_dog(char *name, float age, char *owner)
	{
		dog_t *dog;
		int length1, length2;

		length1 = _strlen(name);
		length2 = _strlen(owner);

		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * (length1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * (length2 + 1));
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;

		return (dog);
	}
