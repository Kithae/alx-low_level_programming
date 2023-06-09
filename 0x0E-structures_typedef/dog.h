#ifndef DOG_H
#define DOG_H

	/**
 * struct dog – the dog structure
 * @name: a character pointer to a string
 * @age: float data type
 * @owner: a character pointer to a string
 * Description: defining a new structure
 */

struct dog
	{
		char *name;
		float age;
		char *owner;
	};

	/**
	 * dog_t - typedef for the dog structure
	 */
	typedef struct dog dog_t;

	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);

	#endif
