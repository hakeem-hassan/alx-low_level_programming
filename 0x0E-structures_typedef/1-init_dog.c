#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of struct type dog
 * @d:pointer struct dog to initialize
 * @name: name initialize
 * @age: age initialize
 * @owner: owner initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

