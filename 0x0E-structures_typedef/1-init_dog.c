#include <stdlib.h>
	#include "dog.h"

	/**
	 * init_dog – a function that the dog structure variables
	 * @d: the pointer to initialize struct_dog
	 * @name: a character pointer to a string
 * @age: float data type
 * @owner: a character pointer to a string
	 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
